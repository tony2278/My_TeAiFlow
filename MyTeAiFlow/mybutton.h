#ifndef MYBUTTON_H
#define MYBUTTON_H

#include <QPushButton>
#include <QEvent>

class MyButton : public QPushButton
{
    Q_OBJECT
public:
    MyButton(QWidget *parent = 0);
    ~MyButton(){return;}
protected:
    virtual void enterEvent(QEvent* e);
    virtual void leaveEvent(QEvent* e);
};

#endif // MYBUTTON_H
