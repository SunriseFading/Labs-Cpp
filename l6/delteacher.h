#ifndef DELTEACHER_H
#define DELTEACHER_H
#include <QDialog>
namespace Ui
{
    class delteacher;
}
class delteacher : public QDialog
{
    Q_OBJECT
public:
    explicit delteacher(QWidget *parent = nullptr);
    ~delteacher();
    void del1(QString &A);
private slots:
    void on_pushButton_clicked();

private:
    Ui::delteacher *ui;
};
#endif // DELMICRO_H
