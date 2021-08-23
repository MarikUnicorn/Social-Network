#ifndef NAMEUSER_H
#define NAMEUSER_H

#include <QDialog>

namespace Ui {
class NameUser;
}

class NameUser : public QDialog
{
    Q_OBJECT

public:
    explicit NameUser(QWidget *parent = nullptr);
    ~NameUser();
     QString getName();
private slots:
    void on_pushButtonName_clicked();

private:
    QString Name;
    Ui::NameUser *ui;
};

#endif // NAMEUSER_H
