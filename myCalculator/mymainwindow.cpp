#include "mymainwindow.h"
#include "ui_mymainwindow.h"
QString a;
QStringList b;
myMainWindow::myMainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::myMainWindow)
{
    ui->setupUi(this);
}

myMainWindow::~myMainWindow()
{
    delete ui;
}



void myMainWindow::doCal(QStringList& p){
    double ret;
    if(p.size()==3){
        if(p.at(2)=="+"){
            ret = p.at(0).toDouble() + p.at(1).toDouble();
        }
        else if(p.at(2)=="-"){
            ret = p.at(1).toDouble() - p.at(0).toDouble();
        }
        else if(p.at(2)=="*"){
            ret = p.at(1).toDouble() * p.at(0).toDouble();
        }
        else{
            ret = p.at(1).toDouble() / p.at(0).toDouble();
        }
        ui->lineEdit->setText(QString::number(ret));
        p.clear();
        p.insert(0,QString::number(ret));
        ui->lineEdit->setText(p.at(0));
    }

}


void myMainWindow::on_btn_1_clicked()
{
    a+="1";
    ui->lineEdit->setText(a);
}

void myMainWindow::on_btn_2_clicked()
{
    a+="2";
    ui->lineEdit->setText(a);
}

void myMainWindow::on_btn_3_clicked()
{
    a+="3";
    ui->lineEdit->setText(a);
}

void myMainWindow::on_btn_4_clicked()
{
    a+="4";
    ui->lineEdit->setText(a);
}

void myMainWindow::on_btn_plus_clicked()
{
    if(a.size()==0){
        qDebug()<<"no input";
        return;
    }
    b.insert(0,a);
    a.clear();

    this->doCal(b);
    b.insert(1,"+");
}

void myMainWindow::on_btn_equ_clicked()
{
    if(b.count() == 2){
        b.insert(0,a);
        this->doCal(b);
    }else{
        a.clear();
        b.clear();
        ui->lineEdit->setText(a);
    }
}

void myMainWindow::on_btn_div_clicked()
{
    if(a.size()==0){
        qDebug()<<"no input";
        return;
    }

    b.insert(0,a);
    a.clear();
    this->doCal(b);
    b.insert(1,"/");
}

void myMainWindow::on_btn_np_clicked()
{

    if(a.at(0)!="-"){
        a = "-" + a;
    }else{
        a.remove(0,1);
    }
    ui->lineEdit->setText(a);
}

void myMainWindow::on_btn_mul_clicked()
{
    if(a.size()==0){
        qDebug()<<"no input";
        return;
    }
    b.insert(0,a);
    a.clear();
    this->doCal(b);
    b.insert(1,"*");
}

void myMainWindow::on_btn_dot_clicked()
{
    a+=".";
    ui->lineEdit->setText(a);
}

void myMainWindow::on_btn_5_clicked()
{
    a+="5";
    ui->lineEdit->setText(a);
}

void myMainWindow::on_btn_6_clicked()
{
    a+="6";
    ui->lineEdit->setText(a);
}

void myMainWindow::on_btn_7_clicked()
{
    a+="7";
    ui->lineEdit->setText(a);
}

void myMainWindow::on_btn_8_clicked()
{
    a+="8";
    ui->lineEdit->setText(a);
}

void myMainWindow::on_btn_9_clicked()
{
    a+="9";
    ui->lineEdit->setText(a);
}

void myMainWindow::on_btn_0_clicked()
{
    a+="0";
    ui->lineEdit->setText(a);
}

void myMainWindow::on_btn_min_clicked()
{
    if(a.size()==0){
        qDebug()<<"no input";
        return;
    }
    b.insert(0,a);
    a.clear();
    this->doCal(b);
    b.insert(1,"-");
}

void myMainWindow::on_btn_rem_clicked()
{
    if(a.size()!=0){
        a.remove(a.size()-1,1);
        ui->lineEdit->setText(a);
    }
}

void myMainWindow::on_btn_clear_clicked()
{
    a.clear();
    b.clear();
    ui->lineEdit->setText("");
}
