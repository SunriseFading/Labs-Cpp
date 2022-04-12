#include "showtable.h"
#include "ui_showtable.h"
int z = 0, t = 0;
showtable::showtable(QWidget *parent) : QDialog(parent),
                                        ui(new Ui::showtable)
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
showtable::~showtable()
{
    delete ui;
}
void showtable::settab1(QString A, QString B, QString C, QString D, QString E)
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
void showtable::reset()
{
    z = 0;
    t = 0;
}
void showtable::on_Close_clicked()
{
    this->close();
}
