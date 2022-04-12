#ifndef ADDTEACHER_H
#define ADDTEACHER_H
#include <QDialog>
namespace Ui
{
    class addteacher;
}
class addteacher : public QDialog
{
    Q_OBJECT
public:
    explicit addteacher(QWidget *parent = nullptr);
    ~addteacher();
    void taketeacher(QString &A, QString &B, QString &C, QString &D, QString &E);
private slots:
    void on_pushButton_2_clicked();

private:
    Ui::addteacher *ui;
};
#endif // ADDMICRO_H
