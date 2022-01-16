#include "mybutton.h"

//tony2278@tt1   2022
//loveu1061@126.com

MyButton::MyButton(QWidget *parent)
{
    setStyleSheet("QPushButton{background: rgb(30,30,30);}");
}

void MyButton::enterEvent(QEvent *e)
{
    setStyleSheet("QPushButton{background: white;}");
}

void MyButton::leaveEvent(QEvent *e)
{
    setStyleSheet("QPushButton{background: rgb(30,30,30);}");
}
