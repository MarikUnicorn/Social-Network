/********************************************************************************
** Form generated from reading UI file 'homescreen.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOMESCREEN_H
#define UI_HOMESCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HomeScreen
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *layout_reflection_text;
    QScrollArea *scrollArea;
    QWidget *widget_scroll;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *wiget_is_scroll_to_date;
    QSpacerItem *verticalSpacer;
    QGroupBox *groupBox;
    QPushButton *pushButton_connect;
    QPushButton *pushButton_disconnect;
    QPushButton *pushButton_rules;
    QLineEdit *lineTextStatus;
    QPushButton *buttonLog;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineTextUser;
    QPushButton *pushButton_send;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *HomeScreen)
    {
        if (HomeScreen->objectName().isEmpty())
            HomeScreen->setObjectName(QString::fromUtf8("HomeScreen"));
        HomeScreen->resize(550, 600);
        HomeScreen->setMinimumSize(QSize(550, 600));
        HomeScreen->setMaximumSize(QSize(550, 600));
        HomeScreen->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(HomeScreen);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout_2 = new QHBoxLayout(centralwidget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        layout_reflection_text = new QVBoxLayout();
        layout_reflection_text->setSpacing(7);
        layout_reflection_text->setObjectName(QString::fromUtf8("layout_reflection_text"));
        layout_reflection_text->setContentsMargins(5, 7, 5, -1);
        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(scrollArea->sizePolicy().hasHeightForWidth());
        scrollArea->setSizePolicy(sizePolicy);
        scrollArea->setMinimumSize(QSize(400, 0));
        scrollArea->setMaximumSize(QSize(400, 16777215));
        scrollArea->setStyleSheet(QString::fromUtf8(""));
        scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollArea->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        scrollArea->setWidgetResizable(true);
        widget_scroll = new QWidget();
        widget_scroll->setObjectName(QString::fromUtf8("widget_scroll"));
        widget_scroll->setGeometry(QRect(0, 0, 377, 474));
        verticalLayout_3 = new QVBoxLayout(widget_scroll);
        verticalLayout_3->setSpacing(7);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout_3->setContentsMargins(5, 5, 5, 5);
        wiget_is_scroll_to_date = new QVBoxLayout();
        wiget_is_scroll_to_date->setObjectName(QString::fromUtf8("wiget_is_scroll_to_date"));

        verticalLayout_3->addLayout(wiget_is_scroll_to_date);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        scrollArea->setWidget(widget_scroll);

        layout_reflection_text->addWidget(scrollArea);


        horizontalLayout_3->addLayout(layout_reflection_text);

        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy1);
        groupBox->setMinimumSize(QSize(0, 0));
        groupBox->setMaximumSize(QSize(150, 16777215));
        groupBox->setAutoFillBackground(false);
        groupBox->setStyleSheet(QString::fromUtf8("#groupBox{\n"
"border: 0px;\n"
"}\n"
"QPushButton {\n"
"border: 2px solid gray;\n"
"border-radius: 15px;\n"
"background-color: rgb(232,232,232);\n"
"}\n"
"QPushButton:hover {\n"
"background-color: rgb(205,232,232);\n"
"}\n"
"QPushButton:pressed {\n"
"background-color: rgb(213,151,240);\n"
"}"));
        pushButton_connect = new QPushButton(groupBox);
        pushButton_connect->setObjectName(QString::fromUtf8("pushButton_connect"));
        pushButton_connect->setGeometry(QRect(0, 20, 101, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("Times New Roman"));
        font.setPointSize(9);
        pushButton_connect->setFont(font);
        pushButton_disconnect = new QPushButton(groupBox);
        pushButton_disconnect->setObjectName(QString::fromUtf8("pushButton_disconnect"));
        pushButton_disconnect->setGeometry(QRect(0, 80, 101, 41));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pushButton_disconnect->sizePolicy().hasHeightForWidth());
        pushButton_disconnect->setSizePolicy(sizePolicy2);
        pushButton_disconnect->setFont(font);
        pushButton_rules = new QPushButton(groupBox);
        pushButton_rules->setObjectName(QString::fromUtf8("pushButton_rules"));
        pushButton_rules->setGeometry(QRect(2, 400, 101, 81));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Times New Roman"));
        font1.setPointSize(10);
        pushButton_rules->setFont(font1);
        pushButton_rules->setStyleSheet(QString::fromUtf8(""));
        lineTextStatus = new QLineEdit(groupBox);
        lineTextStatus->setObjectName(QString::fromUtf8("lineTextStatus"));
        lineTextStatus->setGeometry(QRect(10, 320, 81, 51));
        lineTextStatus->setFont(font1);
        lineTextStatus->setLayoutDirection(Qt::LeftToRight);
        lineTextStatus->setAutoFillBackground(false);
        lineTextStatus->setStyleSheet(QString::fromUtf8("border: 0px;\n"
"background-color: rgb(240,240,240);"));
        lineTextStatus->setInputMethodHints(Qt::ImhNone);
        lineTextStatus->setMaxLength(15);
        lineTextStatus->setCursorPosition(0);
        lineTextStatus->setAlignment(Qt::AlignCenter);
        lineTextStatus->setReadOnly(true);
        buttonLog = new QPushButton(groupBox);
        buttonLog->setObjectName(QString::fromUtf8("buttonLog"));
        buttonLog->setGeometry(QRect(0, 180, 101, 41));
        buttonLog->setFont(font1);

        horizontalLayout_3->addWidget(groupBox);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(10);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(5, -1, 5, -1);
        lineTextUser = new QLineEdit(centralwidget);
        lineTextUser->setObjectName(QString::fromUtf8("lineTextUser"));
        lineTextUser->setMinimumSize(QSize(0, 30));
        lineTextUser->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-radius: 15px;\n"
"padding-left: 10px;"));
        lineTextUser->setMaxLength(1000);

        horizontalLayout->addWidget(lineTextUser);

        pushButton_send = new QPushButton(centralwidget);
        pushButton_send->setObjectName(QString::fromUtf8("pushButton_send"));
        pushButton_send->setFont(font1);

        horizontalLayout->addWidget(pushButton_send);


        verticalLayout->addLayout(horizontalLayout);


        horizontalLayout_2->addLayout(verticalLayout);

        HomeScreen->setCentralWidget(centralwidget);
        menubar = new QMenuBar(HomeScreen);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 550, 26));
        HomeScreen->setMenuBar(menubar);
        statusbar = new QStatusBar(HomeScreen);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        HomeScreen->setStatusBar(statusbar);

        retranslateUi(HomeScreen);

        QMetaObject::connectSlotsByName(HomeScreen);
    } // setupUi

    void retranslateUi(QMainWindow *HomeScreen)
    {
        HomeScreen->setWindowTitle(QCoreApplication::translate("HomeScreen", "HomeScreen", nullptr));
        groupBox->setTitle(QString());
        pushButton_connect->setText(QCoreApplication::translate("HomeScreen", "\320\237\321\226\320\264\320\272\320\273\321\216\321\207\320\270\321\202\320\270\321\201\321\214", nullptr));
        pushButton_disconnect->setText(QCoreApplication::translate("HomeScreen", "\320\222\321\226\320\264\320\272\320\273\321\216\321\207\320\270\321\202\320\270\321\201\321\214", nullptr));
        pushButton_rules->setText(QCoreApplication::translate("HomeScreen", "\320\237\321\200\320\260\320\262\320\270\320\273\320\260", nullptr));
        lineTextStatus->setText(QString());
        buttonLog->setText(QCoreApplication::translate("HomeScreen", "Log", nullptr));
        lineTextUser->setText(QString());
        pushButton_send->setText(QCoreApplication::translate("HomeScreen", "\320\235\320\260\320\264\321\226\321\201\320\273\320\260\321\202\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HomeScreen: public Ui_HomeScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOMESCREEN_H
