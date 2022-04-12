#include "add.h"
#include "ui_add.h"
add::add(QWidget *parent) : QDialog(parent),
                            ui(new Ui::add)
{
    ui->setupUi(this);
}
add::~add()
{
    delete ui;
}
void add::takestudent(QString &A, QString &B, QString &C, QString &E)
{
    A = ui->namestudent->text();
    B = ui->agestudent->text();
    C = ui->coursestudent->text();
    E = ui->label_4->text();
}
void add::taketeacher(QString &A, QString &B, QString &C, QString &D, QString &E)
{
    A = ui->nameteacher->text();
    B = ui->ageteacher->text();
    C = ui->institute->text();
    D = ui->department->text();
    E = ui->label_4->text();
}
void add::on_addstudent_clicked()
{
    ui->label_4->setText(".");
    this->close();
}
void add::on_addteacher_clicked()
{
    ui->label_4->setText("*");
    this->close();
}
