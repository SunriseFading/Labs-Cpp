#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "teacher.h"
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
void MainWindow::on_add_clicked()
{
    QString A = "1";
    double number;
    number = A.toDouble();
    s->obr(number);
}
void MainWindow::on_del_clicked()
{
    QString A = "2";
    double number;
    number = A.toDouble();
    s->obr(number);
}
void MainWindow::on_show_clicked()
{
    QString A = "3";
    double number;
    number = A.toDouble();
    s->obr(number);
}
void MainWindow::on_close_clicked()
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
