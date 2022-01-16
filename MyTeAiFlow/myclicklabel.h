#ifndef MYCLICKLABEL_H
#define MYCLICKLABEL_H

#include <QWidget>
#include <QLabel>
#include <QEvent>

class MyClickLabel : public QLabel
{
    Q_OBJECT
public:
    MyClickLabel(QWidget * parent = 0);
private:

protected:
    virtual void mouseReleaseEvent(QMouseEvent * ev);
    virtual void enterEvent(QEvent* e);
    virtual void leaveEvent(QEvent* e);
signals:
    void clicked(void);
};

#endif // MYCLICKLABEL_H
