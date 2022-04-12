#ifndef SHOWVECTOR_H
#define SHOWVECTOR_H
#include <QDialog>
namespace Ui
{
    class showvector;
}
class showvector : public QDialog
{
    Q_OBJECT
public:
    explicit showvector(QWidget *parent = nullptr);
    ~showvector();
    void settab1(QString A, QString B, QString C, QString D);
    void reset();
private slots:
    void on_Close_clicked();

private:
    Ui::showvector *ui;
};
#endif // SHOWVECTOR_H
