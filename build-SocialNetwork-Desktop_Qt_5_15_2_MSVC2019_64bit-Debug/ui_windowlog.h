/********************************************************************************
** Form generated from reading UI file 'windowlog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOWLOG_H
#define UI_WINDOWLOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_windowLog
{
public:
    QGridLayout *gridLayout;
    QTextEdit *editLog;

    void setupUi(QDialog *windowLog)
    {
        if (windowLog->objectName().isEmpty())
            windowLog->setObjectName(QString::fromUtf8("windowLog"));
        windowLog->resize(626, 416);
        gridLayout = new QGridLayout(windowLog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        editLog = new QTextEdit(windowLog);
        editLog->setObjectName(QString::fromUtf8("editLog"));

        gridLayout->addWidget(editLog, 0, 0, 1, 1);


        retranslateUi(windowLog);

        QMetaObject::connectSlotsByName(windowLog);
    } // setupUi

    void retranslateUi(QDialog *windowLog)
    {
        windowLog->setWindowTitle(QCoreApplication::translate("windowLog", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class windowLog: public Ui_windowLog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOWLOG_H
