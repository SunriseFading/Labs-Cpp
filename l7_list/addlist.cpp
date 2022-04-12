#include "addlist.h"
#include "ui_addlist.h"

addlist::addlist(QWidget *parent) : QDialog(parent),
                                    ui(new Ui::addlist)
{
    ui->setupUi(this);
}

addlist::~addlist()
{
    delete ui;
}
void addlist::taketeacher(QString &A, QString &B, QString &C, QString &D)
{
    A = ui->surname1->text();
    B = ui->name1->text();
    C = ui->subject1->text();
    D = ui->experience1->text();
}
void addlist::on_pushButton_2_clicked()
{
    this->close();
}
