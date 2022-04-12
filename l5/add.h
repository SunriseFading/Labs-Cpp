#ifndef ADD_H
#define ADD_H
#include <QDialog>
namespace Ui
{
    class add;
}
class add : public QDialog
{
    Q_OBJECT
public:
    explicit add(QWidget *parent = nullptr);
    ~add();
    void takestudent(QString &A, QString &B, QString &C, QString &E);
    void taketeacher(QString &A, QString &B, QString &C, QString &D, QString &E);
private slots:
    void on_addstudent_clicked();
    void on_addteacher_clicked();

private:
    Ui::add *ui;
};
#endif // ADD_H
