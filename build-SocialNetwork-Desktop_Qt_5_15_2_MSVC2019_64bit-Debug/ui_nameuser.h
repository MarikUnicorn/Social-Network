/********************************************************************************
** Form generated from reading UI file 'nameuser.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NAMEUSER_H
#define UI_NAMEUSER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_NameUser
{
public:
    QLineEdit *lineName;
    QPushButton *pushButtonName;
    QLineEdit *lineEdit_2;

    void setupUi(QDialog *NameUser)
    {
        if (NameUser->objectName().isEmpty())
            NameUser->setObjectName(QString::fromUtf8("NameUser"));
        NameUser->resize(461, 90);
        NameUser->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"border: 1px solid gray;\n"
"border-radius: 15px;\n"
"padding-left: 10px;\n"
"}\n"
"QPushButton {\n"
"border: 1px solid gray;\n"
"border-radius: 15px;\n"
"background-color: rgb(234,234,234);\n"
"}\n"
"QPushButton:hover {\n"
"background-color: rgb(229,226,234);\n"
"}\n"
"QPushButton:pressed {\n"
"border: 2px solid black;\n"
"background-color: rgb(241,237,246);\n"
"}"));
        lineName = new QLineEdit(NameUser);
        lineName->setObjectName(QString::fromUtf8("lineName"));
        lineName->setGeometry(QRect(10, 50, 331, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("Times New Roman"));
        font.setPointSize(10);
        lineName->setFont(font);
        lineName->setMaxLength(50);
        lineName->setCursorPosition(0);
        pushButtonName = new QPushButton(NameUser);
        pushButtonName->setObjectName(QString::fromUtf8("pushButtonName"));
        pushButtonName->setGeometry(QRect(350, 50, 101, 31));
        lineEdit_2 = new QLineEdit(NameUser);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(10, 10, 171, 31));
        lineEdit_2->setFont(font);
        lineEdit_2->setReadOnly(true);

        retranslateUi(NameUser);

        QMetaObject::connectSlotsByName(NameUser);
    } // setupUi

    void retranslateUi(QDialog *NameUser)
    {
        NameUser->setWindowTitle(QCoreApplication::translate("NameUser", "Dialog", nullptr));
        lineName->setInputMask(QString());
        lineName->setText(QString());
        lineName->setPlaceholderText(QCoreApplication::translate("NameUser", "Name", nullptr));
        pushButtonName->setText(QCoreApplication::translate("NameUser", "PushButton", nullptr));
        lineEdit_2->setText(QCoreApplication::translate("NameUser", "\320\222\320\277\320\270\321\210\321\226\321\202\321\214 \320\262\320\260\321\210\320\265 \321\226\320\274'\321\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NameUser: public Ui_NameUser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NAMEUSER_H
