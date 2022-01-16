#include "formimageloader.h"
#include "ui_formimageloader.h"
#include <QMessageBox>
#include <QDebug>
#include <QPixmap>
#include <QTreeWidget>

FormImageLoader::FormImageLoader(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FormImageLoader)
{
    ui->setupUi(this);
    m_CurIdx = 0;
    QString filename1 = "D:/SrcImages/1/1_1_te_0.bmp";
    QString filename2 = "D:/SrcImages/1/1_2_te_0.bmp";
    m_CurImg = new QImage;
    QImage* img1 = new QImage;
    QImage* img2 = new QImage;

    if(img1->load(filename1))
        ui->labelImg1->setPixmap(QPixmap::fromImage(*img1));

    if(img2->load(filename2))
        ui->labelImg2->setPixmap(QPixmap::fromImage(*img2));

    QObject::connect(ui->labelImg1, SIGNAL(clicked()), this, SLOT(onClicked()));
    QObject::connect(ui->labelImg2, SIGNAL(clicked()), this, SLOT(onClicked()));
    QObject::connect(ui->labelText1, SIGNAL(clicked()), this, SLOT(onClicked()));
    QObject::connect(ui->labelText2, SIGNAL(clicked()), this, SLOT(onClicked()));

    QObject::connect(ui->labelDelete1, SIGNAL(clicked()), this, SLOT(onDeleteClicked()));
    QObject::connect(ui->labelDelete2, SIGNAL(clicked()), this, SLOT(onDeleteClicked()));
}

FormImageLoader::~FormImageLoader()
{
    delete ui;
}

void FormImageLoader::on_pushButton_3_clicked()
{
    //delete m_CurIdx image
}

void FormImageLoader::onClicked()
{
    QString filename = "D:/SrcImages/1/1_1_te_0.bmp";
    //给Image Draw 一个绿色的边框  cv::rectangle()

    if(m_CurImg->load(filename))
        ui->labelMainImage->setPixmap(QPixmap::fromImage(*m_CurImg));

    //ui->labelImg1->setStyleSheet("MyClickLabel{background-color: rgba(80, 80, 80, 200;}");
}

void FormImageLoader::onDeleteClicked()
{
    QMessageBox msgbox(QMessageBox::Information,tr("删除样本"),tr("取消"),QMessageBox::Yes|QMessageBox::No);
    msgbox.setStyleSheet("QMessageBox{background-color: rgba(40, 40, 40, 50);\
                 border:1px solid #CCFFF6;\
                 border-radius:3px;\
                 }");
    switch (msgbox.exec())
        {
        case QMessageBox::Yes:
                break;
        case QMessageBox::No:
            qDebug()<<"点击取消";
            break;
        default:
            break;
        }
}
