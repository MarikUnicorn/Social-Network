#include "homescreen.h"
#include "ui_homescreen.h"
#define port1 80
#define port2 90
HomeScreen::HomeScreen(QString nameUser,QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::HomeScreen)
{
    user = nameUser;
    qInfo() << user+": called Constructor";
    ui->setupUi(this);
    rules = new Rules();
    server = new QTcpServer(this);
    connect(server,SIGNAL(newConnection()),this,SLOT(server_connect()));
    if(server->listen(QHostAddress::Any,port1)!=true){
         server->listen(QHostAddress::Any,port2);
         ui->statusbar->showMessage(user+" Port2");
    }else
    {
         ui->statusbar->showMessage(user+" Port1");
    }
    socket = nullptr;
    ui->pushButton_disconnect->setEnabled(false);
    ui->pushButton_send->setEnabled(false);
}
HomeScreen::~HomeScreen()
{
    qInfo() << user+": called Destructor";
    delete ui;
     if(socket != nullptr)
            delete socket;
     if(server->isListening())
        server->close();
    delete server;
    delete rules;
    list.clear();
}
void HomeScreen::redy()
{
    qInfo() << user+": called method redy()";
    QString text = socket->readAll();
    if(text != "###Conect###Acept###"){
    lineEdit = new QLineEdit(text);
    lineEdit->setAlignment(Qt::AlignLeft);
    lineEdit->setStyleSheet("QLineEdit{background-color: rgb(255,208,235);padding-left:10px;padding-right:10px;border: 1px solid gray;border-radius:15px;font-family:\"Times New Roman\";font-size:15px;}");
    list << lineEdit;
    ui->wiget_is_scroll_to_date->addWidget(lineEdit);
    }
}
void HomeScreen::disc()
{
    qInfo() << user+": called method disc()";
    delete socket;
    socket = nullptr;
    if(server->listen(QHostAddress::Any,port1)!=true)
    {
        server->listen(QHostAddress::Any,port2);
        ui->statusbar->showMessage(user+" Port2");
    }else
        ui->statusbar->showMessage(user+" Port1");
    ui->pushButton_connect->setEnabled(true);
    ui->pushButton_disconnect->setEnabled(false);
    ui->pushButton_send->setEnabled(false);
    ui->lineTextStatus->setText("Disconect");
}
void HomeScreen::connection_to_user()
{
    qInfo() << user+": called method connection_to_user()";
    socket->write("###Conect###Acept###");
    ui->lineTextStatus->setText("Connect");
}
void HomeScreen::server_connect()
{
    qInfo() << user+": called method server_connect()";
    socket = server->nextPendingConnection();
    connect(socket,SIGNAL(readyRead()),this,SLOT(redy()));
    connect(socket,SIGNAL(disconnected()),this,SLOT(disc()));
    ui->pushButton_connect->setEnabled(false);
    ui->pushButton_disconnect->setEnabled(true);
    ui->pushButton_send->setEnabled(true);
    server->close();
}
void HomeScreen::on_pushButton_connect_clicked()
{
    qInfo() << user+": called method on_pushButton_connect_clicked()";
    server->close();
    QString Ip;
    gettingIp windowIp;
    windowIp.exec();
    if((Ip=windowIp.getIp())!="")
    {
        socket = new QTcpSocket(this);
        connect(socket,SIGNAL(connected()),this,SLOT(connection_to_user()));
        connect(socket,SIGNAL(readyRead()),this,SLOT(redy()));
        connect(socket,SIGNAL(disconnected()),this,SLOT(disc()));
        socket->connectToHost(Ip,port1);
        if(socket->waitForConnected(5000)!=true)
        {
            socket->connectToHost(Ip,port2);
            if(socket->waitForConnected(5000))
            {

                ui->pushButton_connect->setEnabled(false);
                ui->pushButton_disconnect->setEnabled(true);
                ui->pushButton_send->setEnabled(true);
            }
            else{
             delete  socket;
                if(server->listen(QHostAddress::Any,port1)!=true)
                {
                     server->listen(QHostAddress::Any,port2);
                     ui->statusbar->showMessage(user+" Port2");
                }
                else
                     ui->statusbar->showMessage(user+" Port1");
            }
        }
        else
        {
            ui->pushButton_connect->setEnabled(false);
            ui->pushButton_disconnect->setEnabled(true);
            ui->pushButton_send->setEnabled(true);
        }
    }
}
void HomeScreen::on_pushButton_disconnect_clicked()
{
    qInfo() << user+": called method on_pushButton_disconnect_clicked()";
      socket->close();
}
void HomeScreen::on_pushButton_rules_clicked()
{
   qInfo() << user+": called method on_pushButton_rules_clicked()";
   rules->show();
}
void HomeScreen::on_pushButton_send_clicked()
{
    qInfo() << user+": called method on_pushButton_send_clicked()";
    QString textUser;
    textUser = ui->lineTextUser->text();
    lineEdit = new QLineEdit(textUser);
    lineEdit->setAlignment(Qt::AlignRight);
    lineEdit->setStyleSheet("QLineEdit{background-color: rgb(210,240,176);padding-left:10px;padding-right:10px;border: 1px solid gray;border-radius:15px;font-family:\"Times New Roman\";font-size:15px;}");
    list << lineEdit;
    ui->wiget_is_scroll_to_date->addWidget(lineEdit);
    socket->write(textUser.toUtf8());
    ui->lineTextUser->setText("");
}
