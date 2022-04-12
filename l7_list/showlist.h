#ifndef SHOWLIST_H
#define SHOWLIST_H

#include <QDialog>

namespace Ui
{
    class showlist;
}

class showlist : public QDialog
{
    Q_OBJECT

public:
    explicit showlist(QWidget *parent = nullptr);
    ~showlist();
    void settab1(QString A, QString B, QString C, QString D);
    void reset();
private slots:
    void on_Close_clicked();

private:
    Ui::showlist *ui;
};

#endif // SHOWLIST_H
