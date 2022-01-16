#ifndef FORMEVENTSHOW_H
#define FORMEVENTSHOW_H

#include <QWidget>

namespace Ui {
class FormEventShow;
}

class FormEventShow : public QWidget
{
    Q_OBJECT

public:
    explicit FormEventShow(QWidget *parent = nullptr);
    ~FormEventShow();

private:
    Ui::FormEventShow *ui;
};

#endif // FORMEVENTSHOW_H
