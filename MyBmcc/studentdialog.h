#ifndef STUDENTDIALOG_H
#define STUDENTDIALOG_H

#include <QDialog>

namespace Ui {
class StudentDialog;
}

class StudentDialog : public QDialog
{
    Q_OBJECT

public:
    explicit StudentDialog(QWidget *parent = nullptr);
    ~StudentDialog();

private slots:

    void on_Csc_btn_clicked();

    void on_confirm_clicked();

    void on_mentorship_btn_clicked();

    void on_Eng_btn_clicked();

    void on_Accounting_btn_clicked();

    void on_Busness_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_11_clicked();

    void on_pushButton_12_clicked();

    void on_pushButton_13_clicked();

    void on_SignUp_clicked();

    void on_pushButton_14_clicked();

    void on_pushButton_15_clicked();

    void on_back_clicked();

    void on_pushButton_16_clicked();

    void on_Tutoring_btn_clicked();

    void on_Resources_btn_clicked();

    void on_internship_btn_clicked();

private:
    Ui::StudentDialog *ui;
};

#endif // STUDENTDIALOG_H
