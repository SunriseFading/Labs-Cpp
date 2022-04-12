#ifndef ADDVECTOR_H
#define ADDVECTOR_H

#include <QDialog>

namespace Ui
{
    class addvector;
}

class addvector : public QDialog
{
    Q_OBJECT

public:
    explicit addvector(QWidget *parent = nullptr);
    ~addvector();
    void taketeacher(QString &A, QString &B, QString &C, QString &D);
private slots:
    void on_pushButton_2_clicked();

private:
    Ui::addvector *ui;
};

#endif // ADDVECTOR_H
