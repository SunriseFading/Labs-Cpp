#include "delteacher.h"
#include "ui_delteacher.h"
#include "QMessageBox"
delteacher::delteacher(QWidget *parent) : QDialog(parent),
                                          ui(new Ui::delteacher)
{
    ui->setupUi(this);
}
delteacher::~delteacher()
{
    delete ui;
}
void delteacher::del1(QString &A)
{
    A = ui->delteach->text();
}
void delteacher::on_pushButton_clicked()
{
    QString str2 = ui->delteach->text();
    this->close();
}
