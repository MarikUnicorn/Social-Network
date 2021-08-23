/********************************************************************************
** Form generated from reading UI file 'gettingip.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GETTINGIP_H
#define UI_GETTINGIP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_gettingIp
{
public:
    QLineEdit *textId;
    QLineEdit *lineEdit_2;
    QPushButton *button_getId;

    void setupUi(QDialog *gettingIp)
    {
        if (gettingIp->objectName().isEmpty())
            gettingIp->setObjectName(QString::fromUtf8("gettingIp"));
        gettingIp->resize(460, 100);
        gettingIp->setMinimumSize(QSize(460, 100));
        gettingIp->setMaximumSize(QSize(460, 100));
        textId = new QLineEdit(gettingIp);
        textId->setObjectName(QString::fromUtf8("textId"));
        textId->setGeometry(QRect(0, 40, 321, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("Times New Roman"));
        font.setPointSize(10);
        textId->setFont(font);
        textId->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-radius: 15px;\n"
"margin-left: 5px;\n"
"padding-left:5px;\n"
"padding-right:5px;\n"
""));
        textId->setMaxLength(20);
        lineEdit_2 = new QLineEdit(gettingIp);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(10, 10, 181, 21));
        lineEdit_2->setFont(font);
        lineEdit_2->setStyleSheet(QString::fromUtf8("border: 0px;\n"
"background-color: rgb(240,240,240);"));
        lineEdit_2->setReadOnly(true);
        button_getId = new QPushButton(gettingIp);
        button_getId->setObjectName(QString::fromUtf8("button_getId"));
        button_getId->setGeometry(QRect(330, 40, 121, 41));
        button_getId->setFont(font);
        button_getId->setStyleSheet(QString::fromUtf8("#getId{\n"
"border: 1px solid gray;\n"
"border-radius: 15px;\n"
"background-color: rgb(240,240,240);\n"
"}\n"
"\n"
"#getId:hover{\n"
"background-color: rgb(205,232,232);\n"
"}\n"
"#getId:pressed{\n"
"background-color: rgb(213,151,240);\n"
"}"));

        retranslateUi(gettingIp);

        QMetaObject::connectSlotsByName(gettingIp);
    } // setupUi

    void retranslateUi(QDialog *gettingIp)
    {
        gettingIp->setWindowTitle(QCoreApplication::translate("gettingIp", "Dialog", nullptr));
        textId->setPlaceholderText(QCoreApplication::translate("gettingIp", "\320\222\320\262\320\265\320\264\321\226\321\202\321\214 Ip", nullptr));
        lineEdit_2->setText(QCoreApplication::translate("gettingIp", "\320\222\320\262\320\265\320\264\321\226\321\202\321\214 Ip \321\201\320\277\321\226\320\262\320\261\320\265\321\201\321\226\320\264\320\275\320\270\320\272\320\260", nullptr));
        button_getId->setText(QCoreApplication::translate("gettingIp", "\320\237\321\226\320\264\320\272\320\273\321\216\321\207\320\270\321\202\320\270\321\201\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class gettingIp: public Ui_gettingIp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GETTINGIP_H
