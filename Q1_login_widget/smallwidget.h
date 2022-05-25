#ifndef SMALLWIDGET_H
#define SMALLWIDGET_H

#include<QWidget>
#include <QSpinBox>
#include <QSlider>
#include <QHBoxLayout>
class SmallWidget : public QWidget
{
    Q_OBJECT
public:
    explicit SmallWidget(QWidget *parent = nullptr);

signals:

};

#endif // SMALLWIDGET_H
