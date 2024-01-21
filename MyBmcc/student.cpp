#include "student.h"
#include "ui_student.h"
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QVBoxLayout>
#include <QMessageBox>
#include <QFile>
#include <QTextStream>
#include <QTextEdit>
#include "signupdialog.h"


Student::Student(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Student)
{
    ui->setupUi(this);


    // Create input fields
    EmailLineEdit = new QLineEdit(this);
    passwordLineEdit = new QLineEdit(this);
    majorLineEdit = new QLineEdit(this);

    // Create labels
    QLabel *EmailLabel = new QLabel("Email:", this);
    QLabel *passwordLabel = new QLabel("Password:", this);
    //QLabel *majorLabel = new QLabel("Major:", this);

    // Create button to trigger mentor list display
    QPushButton *displayMentorButton = new QPushButton("Display Mentor List", this);

    // Create mentor list display area
    mentorListTextEdit = new QTextEdit(this);
    mentorListTextEdit->setReadOnly(true);

    // Layout
    QVBoxLayout *layout = new QVBoxLayout(this);
    layout->addWidget(EmailLabel);
    layout->addWidget(EmailLineEdit);
    layout->addWidget(passwordLabel);
    layout->addWidget(passwordLineEdit);
    layout->addWidget(majorLabel);
    layout->addWidget(majorLineEdit);
    layout->addWidget(displayMentorButton);
    layout->addWidget(mentorListTextEdit);

    // Connect the button signal to the slot
    connect(displayMentorButton, &QPushButton::clicked, this, &Student::displayMentorList);
}

 void Student::displayMentorList() {
     //Get user information
     //QString firstName = SignupDialog::firstNameLineEdit->text();
     //QString lastName = SignupDialog::lastNameLineEdit->text();
     QString major = majorLineEdit->text();

    // Display user information
    //mentorListTextEdit->clear();
   // mentorListTextEdit->append("User Information:");
    //mentorListTextEdit->append("First Name: " + firstName);
    //mentorListTextEdit->append("Last Name: " + lastName);
    //mentorListTextEdit->append("Major: " + major);
   // mentorListTextEdit->append("\nList of Mentors:");

    //Read and display the list of mentors from a file based on the student's major
    QString fileName;

    if (major == "Accounting") {
        fileName = ":/files/Accounting_Mentors";
    } else if (major == "Business administration")  {
        fileName = ":/files/Businessadministration_Mentors";
    } else if (major == "Computer Science") {
        fileName = ":/files/CSC_Mentors";
    } else if (major == "Engineering") {
        fileName = ":/files/engeneering_Mentors";
    } else {
        QMessageBox::critical(this, "Error", "Invalid major");
        return;
    }

    QFile file(fileName);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QMessageBox::critical(this, "Error", "Error opening file: " + fileName);
        return;
    }

    QTextStream in(&file);
    while (!in.atEnd()) {
        QString mentor = in.readLine();
        mentorListTextEdit->append(mentor);
    }

    file.close();
}

Student::~Student()
{
    delete ui;
}
