#include "delvector.h"
#include "ui_delvector.h"
delvector::delvector(QWidget *parent) : QDialog(parent),
                                        ui(new Ui::delvector)
{
    ui->setupUi(this);
}
delvector::~delvector()
{
    delete ui;
}
void delvector::on_pushButton_clicked()
{
    this->close();
}
void delvector::del1(QString &A)
{
    A = ui->delteach->text();
}
