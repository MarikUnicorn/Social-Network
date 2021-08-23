/********************************************************************************
** Form generated from reading UI file 'rules.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RULES_H
#define UI_RULES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Rules
{
public:
    QGridLayout *gridLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout_2;
    QPushButton *pushButton_2;
    QTextEdit *textEdit_2;
    QTextEdit *textEdit;
    QPushButton *pushButton_3;
    QPushButton *pushButton;
    QTextEdit *textEdit_3;

    void setupUi(QWidget *Rules)
    {
        if (Rules->objectName().isEmpty())
            Rules->setObjectName(QString::fromUtf8("Rules"));
        Rules->resize(969, 458);
        Rules->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"border: 2px solid gray;\n"
"border-radius: 15px;\n"
"background-color: rgb(232,232,232);\n"
"margin-right:5px;\n"
"}\n"
"QPushButton:hover {\n"
"background-color: rgb(205,232,232);\n"
"}\n"
"QPushButton:pressed {\n"
"background-color: rgb(213,151,240);\n"
"}"));
        gridLayout = new QGridLayout(Rules);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        scrollArea = new QScrollArea(Rules);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 945, 434));
        gridLayout_3 = new QGridLayout(scrollAreaWidgetContents);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        pushButton_2 = new QPushButton(scrollAreaWidgetContents);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);
        pushButton_2->setMinimumSize(QSize(150, 40));
        QFont font;
        font.setFamily(QString::fromUtf8("Times New Roman"));
        font.setPointSize(10);
        pushButton_2->setFont(font);

        gridLayout_2->addWidget(pushButton_2, 1, 1, 1, 1);

        textEdit_2 = new QTextEdit(scrollAreaWidgetContents);
        textEdit_2->setObjectName(QString::fromUtf8("textEdit_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(textEdit_2->sizePolicy().hasHeightForWidth());
        textEdit_2->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(textEdit_2, 1, 2, 1, 1);

        textEdit = new QTextEdit(scrollAreaWidgetContents);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        sizePolicy1.setHeightForWidth(textEdit->sizePolicy().hasHeightForWidth());
        textEdit->setSizePolicy(sizePolicy1);
        textEdit->setMinimumSize(QSize(0, 100));
        textEdit->setFont(font);
        textEdit->setStyleSheet(QString::fromUtf8(""));

        gridLayout_2->addWidget(textEdit, 0, 2, 1, 1);

        pushButton_3 = new QPushButton(scrollAreaWidgetContents);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setMinimumSize(QSize(150, 40));
        pushButton_3->setFont(font);

        gridLayout_2->addWidget(pushButton_3, 2, 1, 1, 1);

        pushButton = new QPushButton(scrollAreaWidgetContents);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        pushButton->setMinimumSize(QSize(150, 40));
        pushButton->setFont(font);

        gridLayout_2->addWidget(pushButton, 0, 1, 1, 1);

        textEdit_3 = new QTextEdit(scrollAreaWidgetContents);
        textEdit_3->setObjectName(QString::fromUtf8("textEdit_3"));
        sizePolicy1.setHeightForWidth(textEdit_3->sizePolicy().hasHeightForWidth());
        textEdit_3->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(textEdit_3, 2, 2, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 1, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout->addWidget(scrollArea, 0, 0, 1, 1);


        retranslateUi(Rules);

        QMetaObject::connectSlotsByName(Rules);
    } // setupUi

    void retranslateUi(QWidget *Rules)
    {
        Rules->setWindowTitle(QCoreApplication::translate("Rules", "Form", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Rules", "\320\222\321\226\320\264\320\272\320\273\321\216\321\207\320\270\321\202\320\270\321\201\321\214", nullptr));
        textEdit_2->setHtml(QCoreApplication::translate("Rules", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Times New Roman'; font-size:10pt;\">\320\224\320\260\320\275\320\260 \320\272\320\275\320\276\320\277\320\272\320\260 \320\264\320\260\321\201\321\202\321\214 \320\262\320\260\320\274 \320\274\320\276\320\266\320\273\320\270\320\262\321\226\321\201\321\202\321\214 \320\262\321\226\320\264\321\224\320\264\320\275\320\260\321\202\320\270\321\201\321\217 \320\262\321\226\320\264 \320\272\320\276\321\200\320\270\321\201\321\202\321\203\320\262\320\260\321\207\320\260 \320\267 \321\217\320\272\320\270\320\274 \320\262\320\270 \321\203"
                        "\320\266\320\265 \320\267\321\224\320\264\320\275\320\260\320\275\321\226.</span></p></body></html>", nullptr));
        textEdit->setHtml(QCoreApplication::translate("Rules", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Times New Roman'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\224\320\260\320\275\320\260 \320\272\320\275\320\276\320\277\320\272\320\260 \320\264\320\260\321\201\321\202\321\214 \320\262\320\260\320\274 \320\274\320\276\320\266\320\273\320\270\320\262\321\226\321\201\321\202\321\214 \320\277\321\226\320\264\320\272\320\273\321\216\321\207\320\270\321\202\320\270\321\201\321\214 \320\264\320\276 \320\264\321\200\321\203\320\263\320\276\320\263\320\276 \320\272\320\276\321\200\320\270\321\201\321\202\321\203\320\262\320\260\321\207\320\260. \320\237\321\226\321\201\320\273\321\217 \320\275\320\260\321\202\320\270"
                        "\321\201\320\272\321\203 \320\275\320\260 \320\272\320\275\320\276\320\277\320\272\321\203, \320\262\320\270\320\273\321\226\320\267\320\265 \320\264\320\276\320\264\320\260\321\202\320\272\320\276\320\262\320\265 \320\262\321\226\320\272\320\275\320\276 \320\262 \320\272\320\276\321\202\321\200\320\265 \320\262\320\270 \320\277\320\276\320\262\320\270\320\275\321\226 \320\267\320\260\320\277\320\270\321\201\320\260\321\202\320\270 Ip \320\272\320\276\321\200\320\270\321\201\321\202\321\203\320\262\320\260\321\207\320\260 \320\267 \321\217\320\272\320\270\320\274 \320\261\320\260\320\266\320\260\321\224\321\202\320\265 \320\267\321\224\320\264\320\275\320\260\321\202\320\270\321\201\321\214. \320\257\320\272\321\211\320\276 \320\267\321\224\320\264\320\275\320\260\320\275\320\275\321\217 \320\277\321\200\320\276\320\271\320\264\320\265 \321\203\321\201\320\277\321\226\321\210\320\275\320\276 \321\202\320\276 \321\203 2-\320\276\321\205 \320\272\320\276\321\200\320\270\321\201\321\202\321\203\320\262\320\260\321"
                        "\207\321\226\320\262 \320\272\320\275\320\276\320\277\320\272\320\260 &quot;\320\237\321\226\320\264\320\272\320\273\321\216\321\207\320\270\321\202\320\270\321\201\321\214&quot; \320\261\321\203\320\264\320\265 \320\262\321\226\320\264\321\226\320\274\320\272\320\275\320\265\320\275\320\260. \320\236\320\264\320\275\320\260\320\272 \320\272\320\275\320\276\320\277\320\272\320\270 &quot;\320\222\321\226\320\264\320\272\320\273\321\216\321\207\320\270\321\202\320\270\321\201\321\214&quot; \321\202\320\260 </p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:9pt;\">&quot;\320\235\320\260\320\264\321\226\321\201\320\273\320\260\321\202\320\270&quot; \321\201\321\202\320\260\320\275\321\203\321\202\321\214 \320\260\320\272\321\202\320\270\320\262\320\275\320\270\320\274\320\270. \320\237\321\206\321\201\320\273\321\217 \321\207\320\276\320\263\320\276 \320\274\320\276\320\266\320\265\321"
                        "\202\320\265 \320\262\321\226\320\273\321\214\320\275\320\276 \321\201\320\277\321\226\320\273\320\272\321\203\320\262\320\260\321\202\320\270\321\201\321\214</span></p></body></html>", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Rules", "\320\235\320\260\320\264\321\226\321\201\320\273\320\260\321\202\320\270", nullptr));
        pushButton->setText(QCoreApplication::translate("Rules", "\320\237\321\226\320\264\320\272\320\273\321\216\321\207\320\270\321\202\320\270\321\201\321\214", nullptr));
        textEdit_3->setHtml(QCoreApplication::translate("Rules", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Times New Roman'; font-size:10pt;\">\320\224\320\260\320\275\320\260 \320\272\320\275\320\276\320\277\320\272\320\260 \320\264\320\260\321\201\321\202\321\214 \320\262\320\260\320\274 \320\274\320\276\320\266\320\273\320\270\320\262\321\226\321\201\321\202\321\214 \320\262\321\226\320\264\320\277\321\200\320\260\320\262\320\273\321\217\321\202\320\270 \320\277\320\276\320\262\321\226\320\264\320\276\320\274\320\273\320\265\320\275\320\275\321\217 \320\264\321\200\321\203\320\263\320\276\320\274\321\203 \320\272\320\276\321\200\320"
                        "\270\321\201\321\202\321\203\320\262\320\260\321\207\321\203</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Rules: public Ui_Rules {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RULES_H
