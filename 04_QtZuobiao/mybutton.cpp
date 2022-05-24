#include "mybutton.h"
#include <QDebug>

myButton::myButton(QWidget *parent) : QPushButton(parent)
{

}

myButton::~myButton(){
    qDebug()<<QString("析构");
}
