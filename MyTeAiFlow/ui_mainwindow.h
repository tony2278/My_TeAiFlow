/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "mybutton.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout_5;
    QWidget *widget_Up;
    MyButton *pushButton_GoUp;
    QWidget *widget_Middle;
    QVBoxLayout *verticalLayout_6;
    QLabel *label;
    MyButton *pushButton_GoDown;
    QWidget *widget_Down;
    QMenuBar *menubar;
    QStatusBar *statusbar;
    QDockWidget *dockWidget;
    QWidget *dockWidgetContents;
    QHBoxLayout *horizontalLayout_2;
    QWidget *widget_LeftBar;
    QVBoxLayout *verticalLayout_2;
    QWidget *widget_4;
    QVBoxLayout *verticalLayout_3;
    MyButton *pushButton_ProjectManage;
    MyButton *pushButton_Toolset;
    MyButton *pushButton_FlowChart;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout_4;
    QSpacerItem *verticalSpacer;
    MyButton *pushButton_2;
    MyButton *pushButton;
    QWidget *widget_LeftArea;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 744);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        widget_2 = new QWidget(widget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setStyleSheet(QString::fromUtf8("background:rgb(20, 20, 20)"));
        verticalLayout_5 = new QVBoxLayout(widget_2);
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        widget_Up = new QWidget(widget_2);
        widget_Up->setObjectName(QString::fromUtf8("widget_Up"));
        widget_Up->setStyleSheet(QString::fromUtf8("background-color:rgb(25,25,25)"));

        verticalLayout_5->addWidget(widget_Up);

        pushButton_GoUp = new MyButton(widget_2);
        pushButton_GoUp->setObjectName(QString::fromUtf8("pushButton_GoUp"));
        pushButton_GoUp->setStyleSheet(QString::fromUtf8("background-color:rgb(30,30,30)"));
        pushButton_GoUp->setFlat(false);

        verticalLayout_5->addWidget(pushButton_GoUp);

        widget_Middle = new QWidget(widget_2);
        widget_Middle->setObjectName(QString::fromUtf8("widget_Middle"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget_Middle->sizePolicy().hasHeightForWidth());
        widget_Middle->setSizePolicy(sizePolicy);
        widget_Middle->setStyleSheet(QString::fromUtf8("background-color:rgb(20,20,20)"));
        verticalLayout_6 = new QVBoxLayout(widget_Middle);
        verticalLayout_6->setSpacing(0);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget_Middle);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_6->addWidget(label);


        verticalLayout_5->addWidget(widget_Middle);

        pushButton_GoDown = new MyButton(widget_2);
        pushButton_GoDown->setObjectName(QString::fromUtf8("pushButton_GoDown"));
        pushButton_GoDown->setStyleSheet(QString::fromUtf8("background-color:rgb(30,30,30)"));
        pushButton_GoDown->setFlat(false);

        verticalLayout_5->addWidget(pushButton_GoDown);

        widget_Down = new QWidget(widget_2);
        widget_Down->setObjectName(QString::fromUtf8("widget_Down"));
        widget_Down->setStyleSheet(QString::fromUtf8("background-color:rgb(25,25,25)"));

        verticalLayout_5->addWidget(widget_Down);

        verticalLayout_5->setStretch(0, 3);
        verticalLayout_5->setStretch(1, 1);
        verticalLayout_5->setStretch(2, 8);
        verticalLayout_5->setStretch(3, 1);
        verticalLayout_5->setStretch(4, 3);

        horizontalLayout->addWidget(widget_2);


        verticalLayout->addWidget(widget);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        dockWidget = new QDockWidget(MainWindow);
        dockWidget->setObjectName(QString::fromUtf8("dockWidget"));
        sizePolicy.setHeightForWidth(dockWidget->sizePolicy().hasHeightForWidth());
        dockWidget->setSizePolicy(sizePolicy);
        dockWidget->setMinimumSize(QSize(130, 700));
        dockWidget->setStyleSheet(QString::fromUtf8("background:rgb(25, 25, 25)"));
        dockWidget->setAllowedAreas(Qt::LeftDockWidgetArea);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QString::fromUtf8("dockWidgetContents"));
        horizontalLayout_2 = new QHBoxLayout(dockWidgetContents);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        widget_LeftBar = new QWidget(dockWidgetContents);
        widget_LeftBar->setObjectName(QString::fromUtf8("widget_LeftBar"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(widget_LeftBar->sizePolicy().hasHeightForWidth());
        widget_LeftBar->setSizePolicy(sizePolicy1);
        widget_LeftBar->setMinimumSize(QSize(10, 0));
        widget_LeftBar->setStyleSheet(QString::fromUtf8("background:rgb(64, 64, 64)"));
        verticalLayout_2 = new QVBoxLayout(widget_LeftBar);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        widget_4 = new QWidget(widget_LeftBar);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        verticalLayout_3 = new QVBoxLayout(widget_4);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        pushButton_ProjectManage = new MyButton(widget_4);
        pushButton_ProjectManage->setObjectName(QString::fromUtf8("pushButton_ProjectManage"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pushButton_ProjectManage->sizePolicy().hasHeightForWidth());
        pushButton_ProjectManage->setSizePolicy(sizePolicy2);
        pushButton_ProjectManage->setStyleSheet(QString::fromUtf8("background-color: rgb(44, 44, 44);color:white"));

        verticalLayout_3->addWidget(pushButton_ProjectManage);

        pushButton_Toolset = new MyButton(widget_4);
        pushButton_Toolset->setObjectName(QString::fromUtf8("pushButton_Toolset"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(pushButton_Toolset->sizePolicy().hasHeightForWidth());
        pushButton_Toolset->setSizePolicy(sizePolicy3);
        pushButton_Toolset->setStyleSheet(QString::fromUtf8("background-color: rgb(44, 44, 44);color:white"));

        verticalLayout_3->addWidget(pushButton_Toolset);

        pushButton_FlowChart = new MyButton(widget_4);
        pushButton_FlowChart->setObjectName(QString::fromUtf8("pushButton_FlowChart"));
        sizePolicy2.setHeightForWidth(pushButton_FlowChart->sizePolicy().hasHeightForWidth());
        pushButton_FlowChart->setSizePolicy(sizePolicy2);
        pushButton_FlowChart->setStyleSheet(QString::fromUtf8("background-color: rgb(44, 44, 44);color:white"));

        verticalLayout_3->addWidget(pushButton_FlowChart);


        verticalLayout_2->addWidget(widget_4);

        widget_3 = new QWidget(widget_LeftBar);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        sizePolicy1.setHeightForWidth(widget_3->sizePolicy().hasHeightForWidth());
        widget_3->setSizePolicy(sizePolicy1);
        verticalLayout_4 = new QVBoxLayout(widget_3);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalSpacer = new QSpacerItem(20, 259, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);

        pushButton_2 = new MyButton(widget_3);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        sizePolicy2.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy2);

        verticalLayout_4->addWidget(pushButton_2);

        pushButton = new MyButton(widget_3);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        sizePolicy2.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy2);

        verticalLayout_4->addWidget(pushButton);

        verticalLayout_4->setStretch(0, 3);
        verticalLayout_4->setStretch(1, 1);
        verticalLayout_4->setStretch(2, 1);

        verticalLayout_2->addWidget(widget_3);

        verticalLayout_2->setStretch(0, 1);
        verticalLayout_2->setStretch(1, 4);

        horizontalLayout_2->addWidget(widget_LeftBar);

        widget_LeftArea = new QWidget(dockWidgetContents);
        widget_LeftArea->setObjectName(QString::fromUtf8("widget_LeftArea"));

        horizontalLayout_2->addWidget(widget_LeftArea);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 9);
        dockWidget->setWidget(dockWidgetContents);
        MainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(1), dockWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MyTeAiFlow Software @tt1", nullptr));
        pushButton_GoUp->setText(QApplication::translate("MainWindow", "V", nullptr));
        label->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        pushButton_GoDown->setText(QApplication::translate("MainWindow", "V", nullptr));
        pushButton_ProjectManage->setText(QApplication::translate("MainWindow", "\n"
"\345\267\245\n"
"\347\250\213\n"
"\347\256\241\n"
"\347\220\206\n"
"", nullptr));
        pushButton_Toolset->setText(QApplication::translate("MainWindow", "\n"
"\345\267\245\n"
"\345\205\267\n"
"\347\256\261\n"
"", nullptr));
        pushButton_FlowChart->setText(QApplication::translate("MainWindow", "\n"
"\346\265\201\n"
"\347\250\213\n"
"\345\233\276\n"
"", nullptr));
        pushButton_2->setText(QApplication::translate("MainWindow", "\n"
"\345\260\217\n"
"\347\220\203\n"
"", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "\n"
"\344\273\273\n"
"\345\212\241\n"
"\347\256\241\n"
"\347\220\206\n"
"", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
