#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}
MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::on_addteacher_clicked()
{
    int number = 1;
    s->obr(number);
}
void MainWindow::on_showteacher_clicked()
{
    int number = 3;
    s->obr(number);
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
void MainWindow::on_delteacher_clicked()
{
    int number = 2;
    s->obr(number);
}
