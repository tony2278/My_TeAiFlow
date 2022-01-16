#include "formtop1.h"
#include "ui_formtop1.h"

FormTop1::FormTop1(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FormTop1)
{
    ui->setupUi(this);
}

FormTop1::~FormTop1()
{
    delete ui;
}
