#include "showvector.h"
#include "ui_showvector.h"
int z = 0, t = 0;
showvector::showvector(QWidget *parent) : QDialog(parent),
                                          ui(new Ui::showvector)
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
showvector::~showvector()
{
    delete ui;
}
void showvector::on_Close_clicked()
{
    this->close();
}
void showvector::settab1(QString A, QString B, QString C, QString D)
{
    z++;
    ui->tabl->setRowCount(z);
    ui->tabl->setItem(t, 0, new QTableWidgetItem(A));
    ui->tabl->setItem(t, 1, new QTableWidgetItem(B));
    ui->tabl->setItem(t, 2, new QTableWidgetItem(C));
    ui->tabl->setItem(t, 3, new QTableWidgetItem(D));
    t++;
}
void showvector::reset()
{
    z = 0;
    t = 0;
}
