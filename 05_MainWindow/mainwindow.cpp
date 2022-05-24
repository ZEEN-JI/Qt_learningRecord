#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    //添加菜单
    QMenuBar* mBar = menuBar();

    //添加菜单栏
    QMenu *pFile = mBar->addMenu("文件");

    //添加菜单项
    QAction *pNew = pFile->addAction("新建");

    connect(pNew, &QAction::triggered, [=](){
        qDebug() <<"新建被按下";
    });

    pFile->addSeparator();
    QAction* pOpen = pFile->addAction("新建");

    //工具栏 菜单项快捷键
    QToolBar *toolBar = addToolBar("toolBar");
    //添加快捷键
    toolBar->addAction(pNew);

    QPushButton* b=new QPushButton(this);
    b->setText("^_^");
    //添加小控件
    toolBar->addWidget(b);

    connect(b,&QPushButton::clicked,[=](){
        b->setText("123");
    });

    //状态栏
    QStatusBar* sBar = statusBar();
    QLabel *label = new QLabel(this);
    label->setText("Normal text file");
    sBar->addWidget(label);
    sBar->addWidget(new QLabel("2",this));

    sBar->addPermanentWidget(new QLabel("3",this));

    QTextEdit* textEdit = new QTextEdit(this);
    setCentralWidget(textEdit);
    QDockWidget *dock = new QDockWidget(this);
    addDockWidget(Qt::RightDockWidgetArea,dock);
    dock->setWidget(textEdit);
}

MainWindow::~MainWindow()
{
}

