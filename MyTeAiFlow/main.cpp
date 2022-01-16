#include "mainwindow.h"

#include <QApplication>
#include <QFile>
#include <QString>

static void setStyle(const QString &style)
{
    QFile qss(style);
    qss.open(QFile::ReadOnly);
    qApp->setStyleSheet(qss.readAll());
    qss.close();
}


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    setStyle("1.qss");

    MainWindow w;
    w.show();
    return a.exec();
}
