#ifndef SIGNUPDIALOG_H
#define SIGNUPDIALOG_H
#include <QDialog>
#include "studentdialog.h"
namespace Ui {
class SignupDialog;
}

class SignupDialog : public QDialog
{
    Q_OBJECT

public:
    explicit SignupDialog(QWidget *parent = nullptr);
    ~SignupDialog();

private slots:
    void on_SignUp_clicked();

    void on_Fnametxt_textEdited(const QString &arg1);

private:
    Ui::SignupDialog *ui;
    StudentDialog *StudentComp;



};

#endif // SIGNUPDIALOG_H
