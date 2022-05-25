#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QStringList>
#include <QString>
#include <QCompleter>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->line_passwd->setEchoMode(QLineEdit::Password);
//    ui->mybutton->setText("123");
//    connect(ui->mybutton,&QPushButton::clicked,this,&MainWindow::close);
}

MainWindow::~MainWindow()
{
    delete ui;
}


//void MainWindow::on_change_clicked()
//{
//    static int i = 0;
//    ui->stackedWidget->setCurrentIndex(++i % 4);
//}

void MainWindow::on_btn_quit_clicked()
{
    this->close();
}

void MainWindow::on_btn_login_clicked()
{
    QString name="11111";
    QString passwd = ui->line_passwd->text();
    QString acc_ = ui->line_acc->text();
    if(name == passwd){
        qDebug()<<"login success" << endl;
    }else{
        qDebug()<<"incorrect password" << endl;
    }
}
