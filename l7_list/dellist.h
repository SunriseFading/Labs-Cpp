#ifndef DELLIST_H
#define DELLIST_H

#include <QDialog>

namespace Ui
{
    class dellist;
}

class dellist : public QDialog
{
    Q_OBJECT

public:
    explicit dellist(QWidget *parent = nullptr);
    ~dellist();
    void del1(QString &A);
private slots:
    void on_pushButton_clicked();

private:
    Ui::dellist *ui;
};

#endif // DELLIST_H
