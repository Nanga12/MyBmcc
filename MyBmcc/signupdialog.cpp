#include "signupdialog.h"
#include "ui_signupdialog.h"
#include <QPixmap>
#include <QFile>
#include "studentdialog.h"
#include "student.h"


SignupDialog::SignupDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SignupDialog)
{
    ui->setupUi(this);
    QPixmap background(":/image/logo.png");
    ui->logo2->setPixmap(background);
    QPixmap wallpaper2(":/image/5.png");
    ui->background2->setPixmap(wallpaper2);

}


SignupDialog::~SignupDialog()
{
    delete ui;
}

void SignupDialog::on_SignUp_clicked()
{
    hide();
    StudentComp = new class StudentDialog(this);
    StudentComp->show();
}


void SignupDialog::on_Fnametxt_textEdited(const QString &arg1)
{

}

