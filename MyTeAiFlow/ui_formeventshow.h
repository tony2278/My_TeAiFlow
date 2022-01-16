#pragma once
/********************************************************************************
** Form generated from reading UI file ''
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>
#include "mybutton.h"

QT_BEGIN_NAMESPACE

class Ui_FormEventShow
{
public:
    MyButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QWidget *FormEventShow)
    {
        if (FormEventShow->objectName().isEmpty())
            FormEventShow->setObjectName(QString::fromUtf8("FormEventShow"));
        FormEventShow->setWindowModality(Qt::NonModal);
        FormEventShow->resize(258, 433);
        FormEventShow->setMouseTracking(true);
        FormEventShow->setAcceptDrops(true);
        pushButton = new MyButton(FormEventShow);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(70, 110, 80, 20));
        pushButton_2 = new QPushButton(FormEventShow);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(70, 190, 80, 20));
        pushButton_3 = new QPushButton(FormEventShow);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(70, 260, 80, 20));

        retranslateUi(FormEventShow);

        QMetaObject::connectSlotsByName(FormEventShow);
    } // setupUi

    void retranslateUi(QWidget *FormEventShow)
    {
        FormEventShow->setWindowTitle(QApplication::translate("FormEventShow", "Form", nullptr));
        pushButton->setText(QApplication::translate("FormEventShow", "PushButton", nullptr));
        pushButton_2->setText(QApplication::translate("FormEventShow", "PushButton", nullptr));
        pushButton_3->setText(QApplication::translate("FormEventShow", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FormEventShow: public Ui_FormEventShow {};
} // namespace Ui

QT_END_NAMESPACE

