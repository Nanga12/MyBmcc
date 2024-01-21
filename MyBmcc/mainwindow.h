#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "student.h"
#include <QMainWindow>
#include "signupdialog.h"
#include "studentdialog.h"
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }


class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_startedbutn_clicked();

private:
    Ui::MainWindow *ui;
    SignupDialog *SignupDialog;
    StudentDialog *studentComp;


};
#endif //MAINWINDOW_H
