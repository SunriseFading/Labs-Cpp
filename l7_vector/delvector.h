#ifndef DELVECTOR_H
#define DELVECTOR_H
#include <QDialog>
namespace Ui
{
    class delvector;
}
class delvector : public QDialog
{
    Q_OBJECT
public:
    explicit delvector(QWidget *parent = nullptr);
    ~delvector();
    void del1(QString &A);
private slots:
    void on_pushButton_clicked();

private:
    Ui::delvector *ui;
};
#endif // DELVECTOR_H
