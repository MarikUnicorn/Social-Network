#include "nameuser.h"
#include "ui_nameuser.h"

NameUser::NameUser(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NameUser)
{
    ui->setupUi(this);
}
NameUser::~NameUser()
{
    delete ui;
}
QString NameUser::getName()
{
    return this->Name;
}
void NameUser::on_pushButtonName_clicked()
{
    this->Name = ui->lineName->text();
    close();
}

