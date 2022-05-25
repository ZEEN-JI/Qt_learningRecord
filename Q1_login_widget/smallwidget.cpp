#include "smallwidget.h"


SmallWidget::SmallWidget(QWidget *parent) : QWidget(parent)
{
    QSpinBox *spin = new QSpinBox(this);
    QSlider *slider = new QSlider(Qt::Horizontal,this);
    QHBoxLayout *hLayout = new QHBoxLayout;
    hLayout->addWidget(spin);
    hLayout->addWidget(slider);
    slider->move(50,0);
    slider->resize(slider->sizeHint().width()+50,slider->sizeHint().height());
    connect(spin,static_cast<void (QSpinBox::*)(int)>(&QSpinBox::valueChanged), slider, &QSlider::setValue);
    connect(slider, &QSlider::valueChanged,spin,&QSpinBox::setValue);
}
