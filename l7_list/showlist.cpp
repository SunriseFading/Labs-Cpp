#include "showlist.h"
#include "ui_showlist.h"
int z = 0, t = 0;
showlist::showlist(QWidget *parent) : QDialog(parent),
                                      ui(new Ui::showlist)
{
    ui->setupUi(this);
    ui->tabl->setColumnCount(4);
    ui->tabl->setRowCount(z);
    QStringList Title;
    Title << "Surname"
          << "Name"
          << "Subject"
          << "Experience";
    ui->tabl->setHorizontalHeaderLabels(Title);
    QTableWidgetItem *item = new QTableWidgetItem();
    QString line;
    item->setText(line);
}

showlist::~showlist()
{
    delete ui;
}
void showlist::settab1(QString A, QString B, QString C, QString D)
{
    z++;
    ui->tabl->setRowCount(z);
    ui->tabl->setItem(t, 0, new QTableWidgetItem(A));
    ui->tabl->setItem(t, 1, new QTableWidgetItem(B));
    ui->tabl->setItem(t, 2, new QTableWidgetItem(C));
    ui->tabl->setItem(t, 3, new QTableWidgetItem(D));
    t++;
}
void showlist::reset()
{
    z = 0;
    t = 0;
}
void showlist::on_Close_clicked()
{
    this->close();
}
