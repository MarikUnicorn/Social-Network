#include "windowlog.h"
#include "ui_windowlog.h"

windowLog::windowLog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::windowLog)
{
    ui->setupUi(this);
}

windowLog::~windowLog()
{
    delete ui;
}

void windowLog::printLog(QString log)
{
    ui->editLog->setText(log+'\n');
}
