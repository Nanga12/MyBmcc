#include "logindialog.h"
#include <QVBoxLayout>
#include <QMessageBox>

LoginDialog::LoginDialog(QWidget *parent)
    : QDialog(parent)
{
    setWindowTitle("Login");

    emailLineEdit = new QLineEdit(this);
    passwordLineEdit = new QLineEdit(this);
    passwordLineEdit->setEchoMode(QLineEdit::Password);

    QLabel *emailLabel = new QLabel("Email:", this);
    QLabel *passwordLabel = new QLabel("Password:", this);

    QPushButton *loginButton = new QPushButton("Login", this);

    connect(loginButton, &QPushButton::clicked, this, &LoginDialog::attemptLogin);

    QVBoxLayout *layout = new QVBoxLayout(this);
    layout->addWidget(emailLabel);
    layout->addWidget(emailLineEdit);
    layout->addWidget(passwordLabel);
    layout->addWidget(passwordLineEdit);
    layout->addWidget(loginButton);
}

void LoginDialog::attemptLogin()
{
    QString enteredEmail = emailLineEdit->text();
    QString enteredPassword = passwordLineEdit->text();
    if (enteredEmail == "text" && enteredPassword == "text") {
        emit loginSuccessful(emailLineEdit->text(), passwordLineEdit->text());
        accept();
    }
    else
    {
        QMessageBox::critical(this, "Login Error", "Invalid email or password. Please try again.");
    }
}

LoginDialog::~LoginDialog()
{
    // Destructor
}
