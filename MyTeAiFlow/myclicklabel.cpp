#include "myclicklabel.h"



MyClickLabel::MyClickLabel(QWidget * parent) : QLabel(parent)
{ }

void MyClickLabel::mouseReleaseEvent(QMouseEvent * ev)
{
    Q_UNUSED(ev)
    emit clicked();
}

void MyClickLabel::enterEvent(QEvent *e)
{
    setStyleSheet("QLabel{background: white;}");
}

void MyClickLabel::leaveEvent(QEvent *e)
{
    setStyleSheet("QLabel{background: rgb(30,30,30);}");
}

