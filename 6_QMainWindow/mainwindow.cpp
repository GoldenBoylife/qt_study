#include "mainwindow.h"
#include <QDebug>
#include "QAction"
#include "QToolBar"
#include "QMenuBar"
#include "QDockWidget"
#include "QListWidget"
#include "QMdiArea"
#include "QMdiSubWindow"
#include "QPushButton"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    QMenu *fileMenu;

    QAction *newAct;
    QAction *openAct;

    /*newAct*/
    newAct = new QAction(QIcon(":/resource/new.png"),tr("New"), this);
    //tr("New")는 나중에 다국어 지원 할 때씀
    //"&New"는 단축키를 쓴다는뜻임.
    //여기선그냥"New"씀

    newAct->setShortcut(QKeySequence::New);
    //단축키 등록
    //QKeySequece의New와 맵핑시킨다.
    newAct->setStatusTip("Create a new file");

    connect(newAct, SIGNAL(triggered()), this, SLOT(slot_newFile()));
    //new메뉴를클릭하면,그것을트리거로,this클래스안에있는,slot_newFile()을실행시킨다.

    /*openAct*/
    openAct = new QAction(QIcon(":/root/resource/new.png"),tr("Open"), this);
    openAct->setShortcut(QKeySequence::Open);
    openAct->setStatusTip("open an existing file");
    connect(openAct, SIGNAL(triggered()), this, SLOT(slot_open()));

    /*여기까지 만든New,open메뉴를 fileMenu에 등록시킨다.*/
    fileMenu = menuBar()->addMenu("&File");
    fileMenu->addAction(newAct);
    fileMenu->addAction(openAct);


    /*Tool Bar만들기*/
    QToolBar *fileToolBar;
    fileToolBar = addToolBar("File");
    fileToolBar->addAction(newAct);
    fileToolBar->addAction(openAct);



    QDockWidget *dock = new QDockWidget("Target", this);
    dock->setAllowedAreas(  Qt::LeftDockWidgetArea
                          | Qt::RightDockWidgetArea
                         );
    QListWidget *customerList = new QListWidget();

    QStringList list ;
    list << "One" << " Two" << "Three" << "Four" << "Five";
    //5개 등록

    customerList->addItems(list);

    dock->setWidget(customerList);
    //dock에customerList 위젯을 등록한다.
    addDockWidget(Qt::RightDockWidgetArea, dock);

    QMdiArea *area = new QMdiArea();
    area->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);

    QMdiSubWindow *subwindow1 = new QMdiSubWindow();
    subwindow1->resize(300,200);

    /*subWindow 1등록*/
    QPushButton *btn = new QPushButton("Button");
    subwindow1->setWidget(btn);

    QMdiSubWindow *subWindow2 = new QMdiSubWindow();
    subWindow2->resize(300,200);

    area->addSubWindow(subwindow1);
    area->addSubWindow(subWindow2);

    setCentralWidget(area);
}

void MainWindow::slot_newFile()
{
    qDebug() << Q_FUNC_INFO;
    //클래스명과함수명알수있다.
}

void MainWindow::slot_open()
{
    qDebug() << Q_FUNC_INFO;
}

MainWindow::~MainWindow()
{

}
