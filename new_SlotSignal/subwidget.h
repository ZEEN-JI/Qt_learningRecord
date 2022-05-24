#ifndef SUBWIDGET_H
#define SUBWIDGET_H

#include <QWidget>
#include <QPushButton>


class SubWidget : public QWidget
{
    Q_OBJECT
public:
    explicit SubWidget(QWidget *parent = nullptr);

signals:
    void mySignal();
    void mySignal(int, QString);

private:
    QPushButton b;
    void sendSlot();


};

#endif // SUBWIDGET_H
