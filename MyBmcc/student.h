#ifndef STUDENT_H
#define STUDENT_H
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QVBoxLayout>
#include <QMessageBox>
#include <QFile>
#include <QTextStream>
#include <QTextEdit>
#include <QDialog>


namespace Ui {
class Student;
}

class Student : public QDialog
{
    Q_OBJECT

public:
    explicit Student(QWidget *parent = nullptr);
    ~Student();

private slots:
    void displayMentorList();

private:
    Ui::Student *ui;
    QLineEdit *EmailLineEdit;
    QLineEdit *passwordLineEdit;
    QLineEdit *majorLineEdit;
    QTextEdit *mentorListTextEdit;


};

#endif // STUDENT_H
