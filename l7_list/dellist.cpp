#include "dellist.h"
#include "ui_dellist.h"

dellist::dellist(QWidget *parent) : QDialog(parent),
                                    ui(new Ui::dellist)
{
    ui->setupUi(this);
}

dellist::~dellist()
{
    delete ui;
}
void dellist::del1(QString &A)
{
    A = ui->delteach->text();
}
void dellist::on_pushButton_clicked()
{
    this->close();
}
