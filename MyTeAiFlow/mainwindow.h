#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "formeventshow.h"
#include "formimageloader.h"
#include <QMenu>

#pragma execution_character_set("utf-8") //让能够正常显示中文字符串

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    bool eventFilter(QObject *watched, QEvent *event);   //事件过滤
private slots:
    void on_pushButton_GoUp_clicked();

    void on_pushButton_GoDown_clicked();
    void popCreateNewProject();
    void popOpenNewProject();

private:
    Ui::MainWindow *ui;
    FormEventShow *m_pFormEventShow;
    FormImageLoader *m_pFormImageLoader;
    QMenu *m_PopMenu; //工程管理
    QMenu *m_PopToolMenu; //工具箱

    QMenu *m_PopSubMenu1;
    QMenu *m_PopSubMenu2;

    bool m_bUp, m_bDown;
};
#endif // MAINWINDOW_H
