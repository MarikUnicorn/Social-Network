#ifndef GETTINGIP_H
#define GETTINGIP_H

#include <QDialog>

namespace Ui {
class gettingIp;
}
class gettingIp : public QDialog
{
    Q_OBJECT
public:
    explicit gettingIp(QWidget *parent = nullptr);
    ~gettingIp();
    QString getIp();
private slots:
    void on_button_getId_clicked();
private:
    QString id;
    Ui::gettingIp *ui;
};
#endif // GETTINGIP_H
