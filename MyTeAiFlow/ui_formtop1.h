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
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>
#include "mybutton.h"

QT_BEGIN_NAMESPACE

class Ui_FormTop1
{
public:
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QFrame *frame;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    MyButton *pushButton;
    MyButton *pushButton_2;
    MyButton *pushButton_3;

    void setupUi(QWidget *FormTop1)
    {
        if (FormTop1->objectName().isEmpty())
            FormTop1->setObjectName(QString::fromUtf8("FormTop1"));
        FormTop1->resize(452, 56);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(FormTop1->sizePolicy().hasHeightForWidth());
        FormTop1->setSizePolicy(sizePolicy);
        FormTop1->setMinimumSize(QSize(0, 0));
        FormTop1->setStyleSheet(QString::fromUtf8("background:rgb(40, 40, 40)"));
        horizontalLayout = new QHBoxLayout(FormTop1);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(FormTop1);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        label->setMinimumSize(QSize(0, 0));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(50, 50, 50);color:white"));

        horizontalLayout->addWidget(label);

        frame = new QFrame(FormTop1);
        frame->setObjectName(QString::fromUtf8("frame"));
        sizePolicy1.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy1);
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(50, 50, 50);color:white"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        frame->setLineWidth(0);
        horizontalLayout_2 = new QHBoxLayout(frame);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(50, 50, 50);color:white"));
        label_2->setLineWidth(0);

        horizontalLayout_2->addWidget(label_2);

        pushButton = new MyButton(frame);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(50, 50, 50);color:white"));
        pushButton->setFlat(true);

        horizontalLayout_2->addWidget(pushButton);

        pushButton_2 = new MyButton(frame);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(50, 50, 50);color:white"));
        pushButton_2->setFlat(true);

        horizontalLayout_2->addWidget(pushButton_2);

        pushButton_3 = new MyButton(frame);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setStyleSheet(QString::fromUtf8("background-color: rgb(50, 50, 50);color:white"));
        pushButton_3->setFlat(true);

        horizontalLayout_2->addWidget(pushButton_3);

        horizontalLayout_2->setStretch(0, 3);
        horizontalLayout_2->setStretch(1, 1);
        horizontalLayout_2->setStretch(2, 1);
        horizontalLayout_2->setStretch(3, 1);

        horizontalLayout->addWidget(frame);

        horizontalLayout->setStretch(0, 3);
        horizontalLayout->setStretch(1, 1);

        retranslateUi(FormTop1);

        QMetaObject::connectSlotsByName(FormTop1);
    } // setupUi

    void retranslateUi(QWidget *FormTop1)
    {
        FormTop1->setWindowTitle(QApplication::translate("FormTop1", "\346\265\201\347\250\213\345\233\276", nullptr));
        label->setText(QApplication::translate("FormTop1", "\346\265\201\347\250\213\345\233\276", nullptr));
        label_2->setText(QApplication::translate("FormTop1", "\346\211\247\350\241\214     ", nullptr));
        pushButton->setText(QApplication::translate("FormTop1", "\345\274\200\345\247\213", nullptr));
        pushButton_2->setText(QApplication::translate("FormTop1", "\346\232\202\345\201\234", nullptr));
        pushButton_3->setText(QApplication::translate("FormTop1", "\345\201\234\346\255\242", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FormTop1: public Ui_FormTop1 {};
} // namespace Ui

QT_END_NAMESPACE

