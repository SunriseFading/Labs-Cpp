#include "show.h"
#include "ui_show.h"
int q1 = 0;
int q2 = 0;
int f1 = 0;
int f2 = 0;
show::show(QWidget *parent) : QDialog(parent),
                              ui(new Ui::show)
{
    ui->setupUi(this);
    ui->tableWidget->setColumnCount(3);
    ui->tableWidget->setRowCount(q1);
    QStringList Title;
    Title << "Surname"
          << "Age"
          << "Course";
    ui->tableWidget->setHorizontalHeaderLabels(Title);
    QTableWidgetItem *item = new QTableWidgetItem();
    QString line;
    item->setText(line);
    ui->tableWidget_2->setColumnCount(4);
    ui->tableWidget_2->setRowCount(q2);
    QStringList Title1;
    Title1 << "Surname"
           << "Age"
           << "Institute"
           << "Department";
    ui->tableWidget_2->setHorizontalHeaderLabels(Title1);
}
show::~show()
{
    delete ui;
}
void show::on_close_clicked()
{
    this->close();
}
void show::table1(QString &A, QString &B, QString &C)
{
    q1++;
    ui->tableWidget->setRowCount(q1);
    ui->tableWidget->setItem(f1, 0, new QTableWidgetItem(A));
    ui->tableWidget->setItem(f1, 1, new QTableWidgetItem(B));
    ui->tableWidget->setItem(f1, 2, new QTableWidgetItem(C));
    f1++;
}
void show::table2(QString &A, QString &B, QString &C, QString &D)
{
    q2++;
    ui->tableWidget_2->setRowCount(q2);
    ui->tableWidget_2->setItem(f2, 0, new QTableWidgetItem(A));
    ui->tableWidget_2->setItem(f2, 1, new QTableWidgetItem(B));
    ui->tableWidget_2->setItem(f2, 2, new QTableWidgetItem(C));
    ui->tableWidget_2->setItem(f2, 3, new QTableWidgetItem(D));
    f2++;
}
void show::reset()
{
    q1 = 0;
    q2 = 0;
    f1 = 0;
    f2 = 0;
}
