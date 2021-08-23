#include "gettingip.h"
#include "ui_gettingip.h"
gettingIp::gettingIp(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::gettingIp)
{
    ui->setupUi(this);
}
gettingIp::~gettingIp()
{
    delete ui;
}
QString gettingIp::getIp()
{
    return id;
}
void gettingIp::on_button_getId_clicked()
{
    this->id = ui->textId->text();
    close();
}
