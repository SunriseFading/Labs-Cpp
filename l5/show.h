#ifndef SHOW_H
#define SHOW_H
#include <QDialog>
namespace Ui
{
    class show;
}
class show : public QDialog
{
    Q_OBJECT
public:
    explicit show(QWidget *parent = nullptr);
    ~show();
    void table1(QString &A, QString &B, QString &C);
    void table2(QString &A, QString &B, QString &C, QString &D);
    void reset();
private slots:
    void on_close_clicked();

private:
    Ui::show *ui;
};
#endif // SHOW_H
