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
    void on_addteacher_clicked();
    void on_showteacher_clicked();
    void on_exit_clicked();
    void on_delteacher_clicked();

private:
    Ui::MainWindow *ui;
    code *s;
};
#endif // MAINWINDOW_H
