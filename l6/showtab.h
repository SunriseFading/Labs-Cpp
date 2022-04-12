#ifndef SHOWTAB_H
#define SHOWTAB_H
#include <QDialog>
namespace Ui
{
    class showtab;
}
class showtab : public QDialog
{
    Q_OBJECT
public:
    explicit showtab(QWidget *parent = nullptr);
    ~showtab();
    void settab1(QString &A, QString &B, QString &C, QString &D, QString &E);
    void reset();
private slots:
    void on_Close_clicked();

private:
    Ui::showtab *ui;
};
#endif // SHOWTAB_H
