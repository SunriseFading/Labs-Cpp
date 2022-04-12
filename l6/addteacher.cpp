#include "addteacher.h"
#include "ui_addteacher.h"
#include <QMessageBox>
addteacher::addteacher(QWidget *parent) : QDialog(parent),
                                          ui(new Ui::addteacher)
{
    ui->setupUi(this);
}
addteacher::~addteacher()
{
    delete ui;
}
void addteacher::on_pushButton_2_clicked()
{
    if (ui->surname1->text() == "" || ui->name1->text() == "" || ui->patronymic1->text() == "" || ui->subject1->text() == "" || ui->experience1->text() == "")
    {
        QMessageBox::warning(this, "Ошибка", "Вы не заполнили все поля!");
    }
    else
    {
        this->close();
    }
}
void addteacher::taketeacher(QString &A, QString &B, QString &C, QString &D,
                             QString &E)
{
    A = ui->surname1->text();
    B = ui->name1->text();
    C = ui->patronymic1->text();
    D = ui->subject1->text();
    E = ui->experience1->text();
}
