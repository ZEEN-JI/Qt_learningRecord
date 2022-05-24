#include "subwidget.h"

SubWidget::SubWidget(QWidget *parent) : QWidget(parent)
{
    setWindowTitle("son");
    b.setParent(this);
    b.setText("switch to main");
    connect(&b,&QPushButton::released,this, &SubWidget::sendSlot);
}
void SubWidget::sendSlot(){
    emit mySignal();
    emit mySignal(250,"i am son windown");
}
