#ifndef MAINWIDGET_H
#define MAINWIDGET_H

#include <QMainWindow>
#include<QPushButton>
#include "subwidget.h"
#include <QDebug>

QT_BEGIN_NAMESPACE
namespace Ui { class mainwidget; }
QT_END_NAMESPACE

class mainwidget : public QMainWindow
{
    Q_OBJECT

public:
    mainwidget(QWidget *parent = nullptr);
    ~mainwidget();
    void mySlot();
    void changeWin();
    void dealSub();
    void dealSlot(int,QString);

private:
    Ui::mainwidget *ui;
    QPushButton b1;
    QPushButton* b2;
    QPushButton b3;

    SubWidget subwin;
};
#endif // MAINWIDGET_H
