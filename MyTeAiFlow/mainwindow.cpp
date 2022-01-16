#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "formtop1.h"
#include <QFileDialog>
#include <QFile>
#include <QMouseEvent>

//tony2278@tt1   2022
//loveu1061@126.com

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    m_bUp = m_bDown = false;
    FormTop1 *titleBarWidget = new FormTop1();
    QWidget *oldTitleBar = ui->dockWidget->titleBarWidget();
    ui->dockWidget->setTitleBarWidget(titleBarWidget);
    if(oldTitleBar)
        delete oldTitleBar;

    //因为凡祈求的，就得著；寻找的，就寻见；叩门的，就给他开门。
    m_pFormImageLoader = new FormImageLoader(/*ui->widget_Middle*/);
    ui->widget_Middle->layout()->addWidget(m_pFormImageLoader);

    //工程管理
    m_PopMenu = new QMenu(this);
    QAction *addNewProject = m_PopMenu->addAction("新建工程");
    QAction *addOpenProject = m_PopMenu->addAction("打开工程");
    connect(addNewProject, SIGNAL(triggered(bool)), this, SLOT(popCreateNewProject()));
    connect(addOpenProject, SIGNAL(triggered(bool)), this, SLOT(popOpenNewProject()));
    QAction *addLine = m_PopMenu->addAction("-------------------------");
    m_PopMenu->setStyleSheet("background-color: rgb(0, 0, 0);color:white");


    //Sub Menu
    QMenu* menuTestProject1 = new QMenu("20220115-Location");
    menuTestProject1->addAction("打开");
    menuTestProject1->addAction("重命名");
    menuTestProject1->addAction("删除工程");
    menuTestProject1->addAction("移出工程");
    menuTestProject1->addAction("打开工程所在位置");
    m_PopMenu->addMenu(menuTestProject1);

    //Sub Menu
    QMenu* menuTestProject2 = new QMenu("20220116-Test");
    menuTestProject2->addAction("打开");
    menuTestProject2->addAction("重命名");
    menuTestProject2->addAction("删除工程");
    menuTestProject2->addAction("移出工程");
    menuTestProject2->addAction("打开工程所在位置");
    m_PopMenu->addMenu(menuTestProject2);

    //工具箱
    m_PopToolMenu = new QMenu(this);
    QAction *actionTitle21 = m_PopToolMenu->addAction("ImageSource");
    QAction *action2Camera = m_PopToolMenu->addAction("    Camera");
    QAction *action2ImageLoader = m_PopToolMenu->addAction("    ImageLoader");
    QAction *action2ImageSource = m_PopToolMenu->addAction("    Image Source");

    QAction *actionTitle22 = m_PopToolMenu->addAction("DeepLearning");
    QAction *action2Location = m_PopToolMenu->addAction("    Location");
    QAction *action2Detection = m_PopToolMenu->addAction("    Detection");
    QAction *action2PixelDetect = m_PopToolMenu->addAction("    Pixel Detect");
    QAction *action2Classify = m_PopToolMenu->addAction("    Classify");
    QAction *action2Unsupervised = m_PopToolMenu->addAction("    Unsupervised");

    QAction *actionTitle23 = m_PopToolMenu->addAction("Transform");
    QAction *action2Crop = m_PopToolMenu->addAction("    Crop");
    QAction *action2Mapping = m_PopToolMenu->addAction("    Mapping");

    QAction *actionTitle24 = m_PopToolMenu->addAction("OtherTool");
    QAction *action2ShowInstance = m_PopToolMenu->addAction("    ShowInstance");
    QAction *action2Mapback = m_PopToolMenu->addAction("    Mapback");
    QAction *action2MergeInstance = m_PopToolMenu->addAction("    MergeInstance");
    m_PopToolMenu->setStyleSheet("background-color: rgb(0, 0, 0);color:white");
    m_PopToolMenu->QMenu::

    //流程图
    setContextMenuPolicy(Qt::CustomContextMenu);
    ui->pushButton_ProjectManage->installEventFilter(this);
    ui->pushButton_Toolset->installEventFilter(this);
    ui->pushButton_FlowChart->installEventFilter(this);
}

MainWindow::~MainWindow()
{
    delete ui;
    if(m_pFormEventShow)
    {
        delete m_pFormEventShow;
        m_pFormEventShow = NULL;
    }

    if(m_pFormImageLoader)
    {
        delete m_pFormImageLoader;
        m_pFormImageLoader = NULL;
    }
}

bool MainWindow::eventFilter(QObject *watched, QEvent *event)
{
    //光标位置
    QCursor *cursor;
    int x = cursor->pos().x();
    int y = cursor->pos().y();

    if(ui->pushButton_ProjectManage == watched)
    {
        if(QEvent::Enter==event->type())
        {
            m_PopMenu->exec(QCursor::pos());//在当前鼠标位置显示
        }
        else if(QEvent::Leave==event->type())
        {
            //
        }
    }
    else if(ui->pushButton_Toolset == watched)
    {
        if(QEvent::Enter==event->type())
        {
            m_PopToolMenu->exec(QCursor::pos());//在当前鼠标位置显示
        }
        else if(QEvent::Leave==event->type())
        {
            //
        }
    }

    return QObject::eventFilter(watched,event);
}


void MainWindow::on_pushButton_GoUp_clicked()
{
    if(m_bUp)
    {
        ui->widget_Up->setHidden(false);
        m_bUp = false;
    }
    else
    {
        ui->widget_Up->setHidden(true);
        m_bUp = true;
    }
}

void MainWindow::on_pushButton_GoDown_clicked()
{
    if(m_bDown)
    {
        ui->widget_Down->setHidden(false);
        m_bDown = false;
    }
    else
    {
        ui->widget_Down->setHidden(true);
        m_bDown = true;
    }
}

void MainWindow::popCreateNewProject()
{
    QString filename;
    filename = QFileDialog::getSaveFileName(this,
                                          tr("创建一个工程"),
                                          "",
                                          tr("Files (*.*)"));
    if(filename.isEmpty())
    {
         return;
    }
    else
    {
        QFile file;
        file.setFileName(filename);
        bool flag = file.open(QIODevice::WriteOnly | QIODevice::Text);
        if(flag)
        {
            file.write("tony2278");
            file.close();
        }
    }
}

void MainWindow::popOpenNewProject()
{
    QString filename;
    filename=QFileDialog::getOpenFileName(this,
                                          tr("选择工程"),
                                          "",
                                          tr("Images (*.*)"));
    if(filename.isEmpty())
    {
         return;
    }
    else
    {

    }
}

