#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "teacher.h"
#include <QMainWindow>
QT_BEGIN_NAMESPACE
namespace Ui
{
    class MainWindow;
}
QT_END_NAMESPACE
class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private slots:
    void on_add_clicked();
    void on_del_clicked();
    void on_show_clicked();
    void on_close_clicked();

private:
    Ui::MainWindow *ui;
    myclass *s;
};
#endif // MAINWINDOW_H
