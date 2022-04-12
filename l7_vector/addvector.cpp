#include "addvector.h"
#include "ui_addvector.h"

addvector::addvector(QWidget *parent) : QDialog(parent),
                                        ui(new Ui::addvector)
{
    ui->setupUi(this);
}

addvector::~addvector()
{
    delete ui;
}
void addvector::on_pushButton_2_clicked()
{
    this->close();
}
void addvector::taketeacher(QString &A, QString &B, QString &C, QString &D)
{
    A = ui->surname1->text();
    B = ui->name1->text();
    C = ui->subject1->text();
    D = ui->experience1->text();
}
