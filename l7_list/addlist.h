#ifndef ADDLIST_H
#define ADDLIST_H

#include <QDialog>

namespace Ui
{
    class addlist;
}

class addlist : public QDialog
{
    Q_OBJECT

public:
    explicit addlist(QWidget *parent = nullptr);
    ~addlist();
    void taketeacher(QString &A, QString &B, QString &C, QString &D);
private slots:
    void on_pushButton_2_clicked();

private:
    Ui::addlist *ui;
};

#endif // ADDLIST_H
