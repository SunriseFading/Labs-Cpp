#ifndef SHOWTABLE_H
#define SHOWTABLE_H

#include <QDialog>

namespace Ui
{
    class showtable;
}

class showtable : public QDialog
{
    Q_OBJECT

public:
    explicit showtable(QWidget *parent = nullptr);
    ~showtable();
    void settab1(QString A, QString B, QString C, QString D, QString E);
    void reset();
private slots:
    void on_Close_clicked();

private:
    Ui::showtable *ui;
};
#endif // SHOWTAB_H
