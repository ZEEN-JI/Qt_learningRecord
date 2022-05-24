#include "mywidget.h"
#include <QPushButton>
#include <mybutton.h>
MyWidget::MyWidget(QWidget *parent)
    : QWidget(parent)
{
    move(100,100);//主窗口坐标相对于主屏幕 x:往右递增  y：往下递增

    QPushButton *b1 = new QPushButton(this);
    b1->move(100,100);//子窗口坐标相对于主窗口 原点在左上角 x:往右递增  y：往下递增
    b1->resize(100,100);
    b1->setText("^_^");

    QPushButton *b2 = new QPushButton(b1);
    b2->resize(10,20);
    b2->move(10,10);
    b2->setText("@_@");


    myButton *b3 = new myButton(this);
    b3->setText("321");
    //指定父对象  直接分配或间接继承于QObject

}

MyWidget::~MyWidget()
{
}

