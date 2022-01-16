#include "formeventshow.h"
#include "ui_formeventshow.h"

FormEventShow::FormEventShow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FormEventShow)
{
    ui->setupUi(this);
}

FormEventShow::~FormEventShow()
{
    delete ui;
}
