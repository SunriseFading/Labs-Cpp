#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    s = new myclass();
}
MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::on_exit_clicked()
{
    QMessageBox::StandardButton reply =
        QMessageBox::question(this, "Exit", "Are you sure you want to exit the program?", QMessageBox::Yes | QMessageBox::No);
    if (reply == QMessageBox::Yes)
    {
        QApplication::quit();
    }
    if (reply == QMessageBox::No)
    {
    }
}
void MainWindow::on_add_clicked()
{
    QString Ch;
    Ch = ui->label->text();
    double num;
    num = Ch.toDouble();
    s->obr(num);
}
void MainWindow::on_show_clicked()
{
    QString Ch;
    Ch = ui->label_2->text();
    double num;
    num = Ch.toDouble();
    s->obr(num);
}
void MainWindow::on_del_clicked()
{
    QString Ch;
    Ch = ui->label_3->text();
    double num;
    num = Ch.toDouble();
    s->obr(num);
}
