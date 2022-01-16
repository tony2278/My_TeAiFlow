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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "myclicklabel.h"

QT_BEGIN_NAMESPACE

class Ui_FormImageLoader
{
public:
    QHBoxLayout *horizontalLayout;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_5;
    QDockWidget *dockWidget;
    QWidget *dockWidgetContents;
    QVBoxLayout *verticalLayout_3;
    QLabel *labelMainImage;
    QDockWidget *dockWidget_2;
    QWidget *dockWidgetContents_2;
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QComboBox *comboBox;
    QFrame *frame;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QWidget *widgetPictureInfo1;
    QHBoxLayout *horizontalLayout_3;
    MyClickLabel *labelImg1;
    MyClickLabel *labelText1;
    MyClickLabel *labelDelete1;
    QWidget *widgetPictureInfo2;
    QHBoxLayout *horizontalLayout_4;
    MyClickLabel *labelImg2;
    MyClickLabel *labelText2;
    MyClickLabel *labelDelete2;

    void setupUi(QWidget *FormImageLoader)
    {
        if (FormImageLoader->objectName().isEmpty())
            FormImageLoader->setObjectName(QString::fromUtf8("FormImageLoader"));
        FormImageLoader->setWindowModality(Qt::NonModal);
        FormImageLoader->resize(787, 403);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(FormImageLoader->sizePolicy().hasHeightForWidth());
        FormImageLoader->setSizePolicy(sizePolicy);
        FormImageLoader->setMouseTracking(true);
        horizontalLayout = new QHBoxLayout(FormImageLoader);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        widget_2 = new QWidget(FormImageLoader);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        sizePolicy.setHeightForWidth(widget_2->sizePolicy().hasHeightForWidth());
        widget_2->setSizePolicy(sizePolicy);
        widget_2->setMouseTracking(true);
        widget_2->setTabletTracking(true);
        horizontalLayout_5 = new QHBoxLayout(widget_2);
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        dockWidget = new QDockWidget(widget_2);
        dockWidget->setObjectName(QString::fromUtf8("dockWidget"));
        sizePolicy.setHeightForWidth(dockWidget->sizePolicy().hasHeightForWidth());
        dockWidget->setSizePolicy(sizePolicy);
        dockWidget->setMouseTracking(true);
        dockWidget->setAllowedAreas(Qt::LeftDockWidgetArea);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QString::fromUtf8("dockWidgetContents"));
        sizePolicy.setHeightForWidth(dockWidgetContents->sizePolicy().hasHeightForWidth());
        dockWidgetContents->setSizePolicy(sizePolicy);
        verticalLayout_3 = new QVBoxLayout(dockWidgetContents);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setSizeConstraint(QLayout::SetNoConstraint);
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        labelMainImage = new QLabel(dockWidgetContents);
        labelMainImage->setObjectName(QString::fromUtf8("labelMainImage"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(labelMainImage->sizePolicy().hasHeightForWidth());
        labelMainImage->setSizePolicy(sizePolicy1);
        labelMainImage->setStyleSheet(QString::fromUtf8("background-color:rgb(40,40,40)"));
        labelMainImage->setScaledContents(true);
        labelMainImage->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(labelMainImage);

        dockWidget->setWidget(dockWidgetContents);

        horizontalLayout_5->addWidget(dockWidget);


        horizontalLayout->addWidget(widget_2);

        dockWidget_2 = new QDockWidget(FormImageLoader);
        dockWidget_2->setObjectName(QString::fromUtf8("dockWidget_2"));
        sizePolicy1.setHeightForWidth(dockWidget_2->sizePolicy().hasHeightForWidth());
        dockWidget_2->setSizePolicy(sizePolicy1);
        dockWidget_2->setMouseTracking(true);
        dockWidget_2->setTabletTracking(false);
        dockWidget_2->setStyleSheet(QString::fromUtf8("background:rgb(50,50,50);\n"
"width:2px;\n"
"\n"
"height:1px;"));
        dockWidget_2->setAllowedAreas(Qt::LeftDockWidgetArea|Qt::RightDockWidgetArea);
        dockWidgetContents_2 = new QWidget();
        dockWidgetContents_2->setObjectName(QString::fromUtf8("dockWidgetContents_2"));
        sizePolicy.setHeightForWidth(dockWidgetContents_2->sizePolicy().hasHeightForWidth());
        dockWidgetContents_2->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(dockWidgetContents_2);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetNoConstraint);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(dockWidgetContents_2);
        widget->setObjectName(QString::fromUtf8("widget"));
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        comboBox = new QComboBox(widget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setMinimumSize(QSize(0, 20));
        comboBox->setStyleSheet(QString::fromUtf8("color:white"));

        verticalLayout_2->addWidget(comboBox);

        frame = new QFrame(widget);
        frame->setObjectName(QString::fromUtf8("frame"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy2);
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        frame->setLineWidth(0);
        horizontalLayout_2 = new QHBoxLayout(frame);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(frame);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMinimumSize(QSize(0, 20));
        pushButton->setStyleSheet(QString::fromUtf8("color:white"));

        horizontalLayout_2->addWidget(pushButton);

        pushButton_2 = new QPushButton(frame);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(0, 20));
        pushButton_2->setStyleSheet(QString::fromUtf8("color:white"));

        horizontalLayout_2->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(frame);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setMinimumSize(QSize(0, 20));
        pushButton_3->setStyleSheet(QString::fromUtf8("color:white"));

        horizontalLayout_2->addWidget(pushButton_3);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 1);
        horizontalLayout_2->setStretch(2, 1);

        verticalLayout_2->addWidget(frame);

        widgetPictureInfo1 = new QWidget(widget);
        widgetPictureInfo1->setObjectName(QString::fromUtf8("widgetPictureInfo1"));
        sizePolicy.setHeightForWidth(widgetPictureInfo1->sizePolicy().hasHeightForWidth());
        widgetPictureInfo1->setSizePolicy(sizePolicy);
        horizontalLayout_3 = new QHBoxLayout(widgetPictureInfo1);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        labelImg1 = new MyClickLabel(widgetPictureInfo1);
        labelImg1->setObjectName(QString::fromUtf8("labelImg1"));
        sizePolicy1.setHeightForWidth(labelImg1->sizePolicy().hasHeightForWidth());
        labelImg1->setSizePolicy(sizePolicy1);
        labelImg1->setMinimumSize(QSize(80, 80));
        labelImg1->setMouseTracking(true);
        labelImg1->setAutoFillBackground(false);
        labelImg1->setScaledContents(true);
        labelImg1->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(labelImg1);

        labelText1 = new MyClickLabel(widgetPictureInfo1);
        labelText1->setObjectName(QString::fromUtf8("labelText1"));
        labelText1->setStyleSheet(QString::fromUtf8("background-color:rgb(40,40,40)"));

        horizontalLayout_3->addWidget(labelText1);

        labelDelete1 = new MyClickLabel(widgetPictureInfo1);
        labelDelete1->setObjectName(QString::fromUtf8("labelDelete1"));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        labelDelete1->setFont(font);
        labelDelete1->setStyleSheet(QString::fromUtf8("background-color:rgb(40,40,40);color:red"));

        horizontalLayout_3->addWidget(labelDelete1);

        horizontalLayout_3->setStretch(0, 2);
        horizontalLayout_3->setStretch(1, 1);
        horizontalLayout_3->setStretch(2, 1);

        verticalLayout_2->addWidget(widgetPictureInfo1);

        widgetPictureInfo2 = new QWidget(widget);
        widgetPictureInfo2->setObjectName(QString::fromUtf8("widgetPictureInfo2"));
        sizePolicy.setHeightForWidth(widgetPictureInfo2->sizePolicy().hasHeightForWidth());
        widgetPictureInfo2->setSizePolicy(sizePolicy);
        horizontalLayout_4 = new QHBoxLayout(widgetPictureInfo2);
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        labelImg2 = new MyClickLabel(widgetPictureInfo2);
        labelImg2->setObjectName(QString::fromUtf8("labelImg2"));
        sizePolicy1.setHeightForWidth(labelImg2->sizePolicy().hasHeightForWidth());
        labelImg2->setSizePolicy(sizePolicy1);
        labelImg2->setMinimumSize(QSize(80, 80));
        labelImg2->setMouseTracking(true);
        labelImg2->setScaledContents(true);
        labelImg2->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(labelImg2);

        labelText2 = new MyClickLabel(widgetPictureInfo2);
        labelText2->setObjectName(QString::fromUtf8("labelText2"));
        labelText2->setStyleSheet(QString::fromUtf8("background-color:rgb(40,40,40)"));

        horizontalLayout_4->addWidget(labelText2);

        labelDelete2 = new MyClickLabel(widgetPictureInfo2);
        labelDelete2->setObjectName(QString::fromUtf8("labelDelete2"));
        labelDelete2->setFont(font);
        labelDelete2->setStyleSheet(QString::fromUtf8("background-color:rgb(40,40,40);color:red"));

        horizontalLayout_4->addWidget(labelDelete2);

        horizontalLayout_4->setStretch(0, 2);
        horizontalLayout_4->setStretch(1, 1);
        horizontalLayout_4->setStretch(2, 1);

        verticalLayout_2->addWidget(widgetPictureInfo2);

        verticalLayout_2->setStretch(0, 1);
        verticalLayout_2->setStretch(1, 1);
        verticalLayout_2->setStretch(2, 1);
        verticalLayout_2->setStretch(3, 1);

        verticalLayout->addWidget(widget);

        dockWidget_2->setWidget(dockWidgetContents_2);

        horizontalLayout->addWidget(dockWidget_2);

        horizontalLayout->setStretch(0, 3);
        horizontalLayout->setStretch(1, 1);

        retranslateUi(FormImageLoader);

        QMetaObject::connectSlotsByName(FormImageLoader);
    } // setupUi

    void retranslateUi(QWidget *FormImageLoader)
    {
        FormImageLoader->setWindowTitle(QApplication::translate("FormImageLoader", "Form", nullptr));
        dockWidget->setWindowTitle(QString());
        labelMainImage->setText(QApplication::translate("FormImageLoader", "TextLabel", nullptr));
        dockWidget_2->setWindowTitle(QApplication::translate("FormImageLoader", "\345\233\276\347\211\207\346\265\217\350\247\210", nullptr));
        comboBox->setItemText(0, QApplication::translate("FormImageLoader", "\346\200\273\351\233\206", nullptr));
        comboBox->setItemText(1, QApplication::translate("FormImageLoader", "\346\277\200\346\264\273\351\233\206", nullptr));
        comboBox->setItemText(2, QApplication::translate("FormImageLoader", "\350\256\255\347\273\203\351\233\206", nullptr));
        comboBox->setItemText(3, QApplication::translate("FormImageLoader", "\346\240\207\350\256\260\351\233\206", nullptr));
        comboBox->setItemText(4, QApplication::translate("FormImageLoader", "\346\234\252\346\240\207\350\256\260\351\233\206", nullptr));
        comboBox->setItemText(5, QApplication::translate("FormImageLoader", "\350\264\271\346\277\200\346\264\273\351\233\206", nullptr));
        comboBox->setItemText(6, QApplication::translate("FormImageLoader", "\351\224\231\350\257\257\351\233\206", nullptr));

        pushButton->setText(QApplication::translate("FormImageLoader", "\347\274\251\347\225\245\345\233\276", nullptr));
        pushButton_2->setText(QApplication::translate("FormImageLoader", "\345\233\276\347\211\207\344\277\241\346\201\257", nullptr));
        pushButton_3->setText(QApplication::translate("FormImageLoader", "\345\210\240\351\231\244", nullptr));
        labelImg1->setText(QApplication::translate("FormImageLoader", "TextLabel", nullptr));
        labelText1->setText(QApplication::translate("FormImageLoader", "260 X 260 \n"
"\n"
"1_1_te_0", nullptr));
        labelDelete1->setText(QApplication::translate("FormImageLoader", "     X", nullptr));
        labelImg2->setText(QApplication::translate("FormImageLoader", "TextLabel", nullptr));
        labelText2->setText(QApplication::translate("FormImageLoader", "260 X 260 \n"
"\n"
"1_2_te_0", nullptr));
        labelDelete2->setText(QApplication::translate("FormImageLoader", "     X", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FormImageLoader: public Ui_FormImageLoader {};
} // namespace Ui

QT_END_NAMESPACE

