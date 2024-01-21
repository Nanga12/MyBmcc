#ifndef LOGINDIALOG_H
#define LOGINDIALOG_H

#include <QDialog>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>

class LoginDialog : public QDialog
{
    Q_OBJECT

public:
    explicit LoginDialog(QWidget *parent = nullptr);
    ~LoginDialog();

signals:
    void loginSuccessful(QString email, QString password);

private slots:
    void attemptLogin();

private:
    QLineEdit *emailLineEdit;
    QLineEdit *passwordLineEdit;
};

#endif // LOGINDIALOG_H
