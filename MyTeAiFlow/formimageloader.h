#ifndef FORMIMAGELOADER_H
#define FORMIMAGELOADER_H

#include <QWidget>
#include <QImage>

namespace Ui {
class FormImageLoader;
}

class FormImageLoader : public QWidget
{
    Q_OBJECT

public:
    explicit FormImageLoader(QWidget *parent = nullptr);
    ~FormImageLoader();

private slots:
    void on_pushButton_3_clicked();
    void onClicked();
    void onDeleteClicked();

private:
    Ui::FormImageLoader *ui;
    int m_CurIdx;
    QImage* m_CurImg;
};

#endif // FORMIMAGELOADER_H
