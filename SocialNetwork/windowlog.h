#ifndef WINDOWLOG_H
#define WINDOWLOG_H

#include <QDialog>

namespace Ui {
class windowLog;
}

class windowLog : public QDialog
{
    Q_OBJECT

public:
    explicit windowLog(QWidget *parent = nullptr);
    ~windowLog();
    void printLog(QString log);

private:
    Ui::windowLog *ui;
};

#endif // WINDOWLOG_H
