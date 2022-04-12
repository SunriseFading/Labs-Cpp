#ifndef DELET_H
#define DELET_H
#include <QDialog>
namespace Ui
{
    class delet;
}
class delet : public QDialog
{
    Q_OBJECT
public:
    explicit delet(QWidget *parent = nullptr);
    ~delet();
    void takedelstudent(QString &R1, QString &E);
    void takedelteacher(QString &R2, QString &E);
private slots:
    void on_delstudent_clicked();
    void on_delteacher_clicked();

private:
    Ui::delet *ui;
};
#endif // DELET_H
