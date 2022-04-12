#include "showtab.h"
#include "ui_showtab.h"
int z = 0;
int t = 0;
showtab::showtab(QWidget *parent) : QDialog(parent),
                                    ui(new Ui::showtab)
{
    ui->setupUi(this);
    ui->tabl->setColumnCount(5);
    ui->tabl->setRowCount(z);
    QStringList Title;
    Title << "Surname"
          << "Name"
          << "Patronymic"
          << "Subject"
          << "Experience";
    ui->tabl->setHorizontalHeaderLabels(Title);
    QTableWidgetItem *item = new QTableWidgetItem();
    QString line;
    item->setText(line);
}
showtab::~showtab()
{
    delete ui;
}
void showtab::on_Close_clicked()
{
    this->close();
}
void showtab::settab1(QString &A, QString &B, QString &C, QString &D, QString &E)
{
    z++;
    ui->tabl->setRowCount(z);
    ui->tabl->setItem(t, 0, new QTableWidgetItem(A));
    ui->tabl->setItem(t, 1, new QTableWidgetItem(B));
    ui->tabl->setItem(t, 2, new QTableWidgetItem(C));
    ui->tabl->setItem(t, 3, new QTableWidgetItem(D));
    ui->tabl->setItem(t, 4, new QTableWidgetItem(E));
    t++;
}
void showtab::reset()
{
    z = 0;
    t = 0;
}
