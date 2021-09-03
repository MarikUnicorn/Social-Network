#ifndef HOMESCREEN_H
#define HOMESCREEN_H
#include <QMainWindow>
#include <QTcpServer>
#include <QTcpSocket>
#include <QList>
#include <QLineEdit>
#include <QTextEdit>
#include "gettingip.h"
#include "rules.h"
QT_BEGIN_NAMESPACE
namespace Ui { class HomeScreen; }
QT_END_NAMESPACE
class HomeScreen : public QMainWindow
{
    Q_OBJECT
public:
    HomeScreen(QString nameUser,QTextEdit *editLog = nullptr,QWidget *parent = nullptr);
    ~HomeScreen();
private slots:
    void redy();
    void disc();
    void connection_to_user();
    void server_connect();
    void on_pushButton_connect_clicked();
    void on_pushButton_disconnect_clicked();
    void on_pushButton_rules_clicked();
    void on_pushButton_send_clicked();

    void on_buttonLog_clicked();

private:
    QString user;
    QList<QLineEdit*>list;
    QLineEdit       *lineEdit;
    QTcpServer      *server;
    QTcpSocket      *socket;
    Rules           *rules;
    Ui::HomeScreen  *ui;
    QTextEdit       *textEditLog;
};
#endif // HOMESCREEN_H
