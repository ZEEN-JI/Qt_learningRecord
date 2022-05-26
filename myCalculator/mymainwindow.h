#ifndef MYMAINWINDOW_H
#define MYMAINWINDOW_H

#include <QMainWindow>
#include <QDebug>

QT_BEGIN_NAMESPACE
namespace Ui { class myMainWindow; }
QT_END_NAMESPACE


class myMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    myMainWindow(QWidget *parent = nullptr);
    ~myMainWindow();
    void doCal(QStringList&);

private slots:
    void on_btn_1_clicked();

    void on_btn_2_clicked();

    void on_btn_3_clicked();

    void on_btn_4_clicked();


    void on_btn_plus_clicked();

    void on_btn_equ_clicked();

    void on_btn_div_clicked();

    void on_btn_np_clicked();

    void on_btn_mul_clicked();

    void on_btn_dot_clicked();

    void on_btn_5_clicked();

    void on_btn_6_clicked();

    void on_btn_7_clicked();

    void on_btn_8_clicked();

    void on_btn_9_clicked();

    void on_btn_0_clicked();

    void on_btn_min_clicked();

    void on_btn_rem_clicked();

    void on_btn_clear_clicked();

private:
    Ui::myMainWindow *ui;
};
#endif // MYMAINWINDOW_H
