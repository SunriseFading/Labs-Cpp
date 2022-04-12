#include "delet.h"
#include "ui_delet.h"
delet::delet(QWidget *parent) : QDialog(parent),
                                ui(new Ui::delet)
{
    ui->setupUi(this);
}
delet::~delet()
{
    delete ui;
}
void delet::on_delstudent_clicked()
{
    ui->key->setText(".");
    this->close();
}
void delet::on_delteacher_clicked()
{
    ui->key->setText("*");
    this->close();
}
void delet::takedelstudent(QString &R1, QString &E)
{
    R1 = ui->delvit->text();
    E = ui->key->text();
}
void delet::takedelteacher(QString &R2, QString &E)
{
    R2 = ui->delant->text();
    E = ui->key->text();
}
