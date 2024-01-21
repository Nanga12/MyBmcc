#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>
#include <QFile>
#include "signupdialog.h"
#include "studentdialog.h"
MainWindow::MainWindow(QWidget *parent):
    QMainWindow(parent),
    ui(new Ui::MainWindow)

{
    ui->setupUi(this);
    QPixmap background(":/image/logo.png");
    ui->logo->setPixmap(background);
    QPixmap wallpaper(":/image/5.png");
    ui->Backgroundimage->setPixmap(wallpaper);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_startedbutn_clicked()
{
    //hide();
    studentComp = new class StudentDialog(this);
    studentComp->show();
}

