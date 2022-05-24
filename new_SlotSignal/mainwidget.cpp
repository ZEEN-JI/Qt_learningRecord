#include "mainwidget.h"
#include "ui_mainwidget.h"

mainwidget::mainwidget(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::mainwidget)
{
    ui->setupUi(this);

    b1.setParent(this);
    b1.setText("close");

    b1.move(100,100);
    b2 = new QPushButton(this);
    b2->setText("abc");
    b1.resize(b2->size());
    connect(&b1, &QAbstractButton::clicked, this, &mainwidget::close);

    connect(b2, &QPushButton::released,this, &mainwidget::mySlot);
    connect(b2, &QPushButton::released,&b1, &QPushButton::hide);



    setWindowTitle("boss");
    b3.setParent(this);
    b3.resize(b2->size());
    b3.setText("switch to son");
    b3.move(50,50);
    void (SubWidget::*funSignal)() = &SubWidget::mySignal;
    void (SubWidget::*testSignal)(int,QString) = &SubWidget::mySignal;
    connect(&b3, &QPushButton::released, this, &mainwidget::changeWin);
    connect(&subwin, funSignal,this, &mainwidget::dealSub);
    connect(&subwin, testSignal,this, &mainwidget::dealSlot);


    QPushButton* b4 = new QPushButton(this);
    b4->setText("Lamda 表达式");
    b4->move(150,150);

    connect(b4,&QPushButton::clicked,[=](bool isCheck){
        qDebug()<<isCheck;
        b4->setText("123");
    });

}


void mainwidget::mySlot(){
    b2->setText("123");
}

void mainwidget::changeWin(){
    subwin.show();
    this->hide();
}

void mainwidget::dealSub(){
    this->show();
    subwin.hide();
}

void mainwidget::dealSlot(int a, QString str){
    qDebug()<<a<<str.toUtf8().data();
}

mainwidget::~mainwidget()
{
    delete ui;
}

