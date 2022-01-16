#ifndef FORMTOP1_H
#define FORMTOP1_H

#include <QWidget>

namespace Ui {
class FormTop1;
}

class FormTop1 : public QWidget
{
    Q_OBJECT

public:
    explicit FormTop1(QWidget *parent = nullptr);
    ~FormTop1();

private:
    Ui::FormTop1 *ui;
};

#endif // FORMTOP1_H
