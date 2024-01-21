#include "studentdialog.h"
#include "ui_studentdialog.h"
#include <QPixmap>
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <stdexcept>
#include "person.h"
#include "student2.h"
#include "mentor.h"
#include <QDebug>
#include "mentee.h"
#include "QVector"
#include <QStandardPaths>
#include <QDesktopServices>
#include <QUrl>

StudentDialog::StudentDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::StudentDialog)
{
    ui->setupUi(this);
    QPixmap background(":/image/1.png");
    ui->background_csc->setPixmap(background);
    QPixmap background1(":/image/2.png");
    ui->background_bsn->setPixmap(background1);
    QPixmap background2(":/image/3.png");
    ui->background_acc->setPixmap(background2);
    QPixmap background3(":/image/4.png");
    ui->background_eng->setPixmap(background3);
    QPixmap background4(":/image/6.png");
    ui->background_login->setPixmap(background4);
    QPixmap background5(":/image/6.png");
    ui->background_opt->setPixmap(background5);
    QPixmap background6(":/image/6.png");
    ui->background_Maj->setPixmap(background6);
    QPixmap background7(":/image/6.png");
    ui->background7->setPixmap(background7);
    QPixmap background9(":/image/6.png");
    ui->Background_9->setPixmap(background9);
    QPixmap background10(":/image/6.png");
    ui->Background_10->setPixmap(background10);
    QPixmap background11(":/image/logo.png");
    ui->logo2->setPixmap(background11);
    QPixmap wallpaper2(":/image/5.png");
    ui->background2->setPixmap(wallpaper2);
    QPixmap wallpaper3(":/image/5.png");
    ui->label_9->setPixmap(wallpaper3);
    QPixmap wallpaper4(":/image/5.png");
    ui->label_14->setPixmap(wallpaper4);
    QPixmap wallpaper5(":/image/5.png");
    ui->label_22->setPixmap(wallpaper5);



}


StudentDialog::~StudentDialog()
{
    delete ui;
}



void StudentDialog::on_Csc_btn_clicked()
{

    try {
        ui->stackedWidget->setCurrentIndex(6);
        QFile file(":/files/CSC_Mentors");

        if (!file.open(QIODevice::ReadOnly | QIODevice::Text)){
           throw std::runtime_error("Failed to open file for reading");
        }
        QTextStream in(&file);
        QString content = in.readAll();

        ui->csc_txt->setText(content);

        file.close();
    } catch (const std::exception& e) {
        qDebug() << "Exception caught: " << e.what();
        QMessageBox::critical(this, "Error", e.what());
    }
}


void StudentDialog::on_confirm_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}


void StudentDialog::on_mentorship_btn_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}


void StudentDialog::on_Eng_btn_clicked()
{

    try {
        ui->stackedWidget->setCurrentIndex(7);
        QFile file(":/files/engeneering_Mentors");

        if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
           throw std::runtime_error("Failed to open file for reading");
        }

        QTextStream in(&file);
        QString content = in.readAll();

        ui->eng_txt->setText(content);

        file.close();
    } catch (const std::exception& e) {
        qDebug() << "Exception caught: " << e.what();
        QMessageBox::critical(this, "Error", e.what());
    }
}


void StudentDialog::on_Accounting_btn_clicked()
{


    try {
        ui->stackedWidget->setCurrentIndex(8);
        QFile file(":/files/Accounting_Mentors");

        if (!file.open(QIODevice::ReadOnly | QIODevice::Text)){
            throw std::runtime_error("Failed to open file for reading");
        }
        QTextStream in(&file);
        QString content = in.readAll();

        ui->Accounting_txt->setText(content);

        file.close();
    } catch (const std::exception& e) {
        qDebug() << "Exception caught: " << e.what();
        QMessageBox::critical(this, "Error", e.what());
    }
}


void StudentDialog::on_Busness_clicked()
{
    try {
        ui->stackedWidget->setCurrentIndex(9);
        QFile file(":/files/Businessadministration_Mentors");

        if (!file.open(QIODevice::ReadOnly | QIODevice::Text)){
            throw std::runtime_error("Failed to open file for reading");
        }
        QTextStream in(&file);
        QString content = in.readAll();

        ui->business_txt->setText(content);

        file.close();
    } catch (const std::exception& e) {
        qDebug() << "Exception caught: " << e.what();
        QMessageBox::critical(this, "Error", e.what());
    }
}


void StudentDialog::on_pushButton_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
}


void StudentDialog::on_pushButton_4_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
}


void StudentDialog::on_pushButton_5_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
}


void StudentDialog::on_pushButton_6_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
}


void StudentDialog::on_pushButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void StudentDialog::on_pushButton_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}


void StudentDialog::on_pushButton_8_clicked()
{
    ui->stackedWidget->setCurrentIndex(11);
}


void StudentDialog::on_pushButton_7_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);

}



void StudentDialog::on_pushButton_9_clicked()
{
    ui->stackedWidget->setCurrentIndex(12);
    QString mjrInput = ui->lineEdit->text();

    QString email = ui->lineEdit_2->text();
    QString lastName = ui->lineEdit_9->text();
    QString firstName = ui->lineEdit_10->text();
    QString phnNbr = ui->lineEdit_3->text();

    Mentor mentor;

    mentor.Lname = lastName;
    mentor.Fname = firstName;
    mentor.phoneNumber = phnNbr;
    mentor.Emailadress = email;

    if (mjrInput == "Computer Science"){

        QString list = "COMPUTER SCIENCE MENTOR'S LIST";
        ui->label_16->setText(list);

        QString filePath = QStandardPaths::writableLocation(QStandardPaths::DocumentsLocation) + ":/CSC_Mentors.txt"; // Example: save in the Documents folder
        QFile file(filePath);

        if (file.open(QIODevice::Append | QIODevice::Text))
        {
            QTextStream stream(&file);
            stream << mentor.Fname << " "<< mentor.Lname << " " << mentor.Emailadress << " " << mentor.phoneNumber << "\n" ;
            file.close();
        }

        // Specify the file path from which to read the content
        //QString sfilePath = ":/files/CSC_Mentors.txt";

        // Open the file for reading
        QFile sfile(":/files/CO SC.txt");
        sfile.open(QIODevice::ReadOnly | QIODevice::Text);

        QTextStream in(&sfile);
        QString content = in.readAll();

        sfile.close();

        // Set the content to the QLabel
        ui->label_21->setText(content);
        ui->label_21->setStyleSheet("background: transparent;");
    }
    else if (mjrInput == "Accounting"){

            QString list = "ACCOUNTING MENTOR'S LIST";
            ui->label_16->setText(list);

            QString filePath = QStandardPaths::writableLocation(QStandardPaths::DocumentsLocation) + ":/files/Accounting_Mentors"; // Example: save in the Documents folder
            QFile file(filePath);

            if (file.open(QIODevice::Append | QIODevice::Text))
            {
                QTextStream stream(&file);
                stream << mentor.Fname << " "<< mentor.Lname << " " << mentor.Emailadress << " " << mentor.phoneNumber << "\n" ;
                file.close();
            }

            // Specify the file path from which to read the content
            //QString sfilePath = ":/files/CSC_Mentors.txt";

            // Open the file for reading
            QFile sfile(":/files/Accounting_Mentors");
            sfile.open(QIODevice::ReadOnly | QIODevice::Text);

            QTextStream in(&sfile);
            QString content = in.readAll();

            sfile.close();

            // Set the content to the QLabel
            ui->label_21->setText(content);
            ui->label_21->setStyleSheet("background: transparent;");

    }

    else if (mjrInput == "Engineering"){

            QString list = "ENGINEERING MENTOR'S LIST";
            ui->label_16->setText(list);

            QString filePath = QStandardPaths::writableLocation(QStandardPaths::DocumentsLocation) + ":/files/Accounting_Mentors"; // Example: save in the Documents folder
            QFile file(filePath);

            if (file.open(QIODevice::Append | QIODevice::Text))
            {
                QTextStream stream(&file);
                stream << mentor.Fname << " "<< mentor.Lname << " " << mentor.Emailadress << " " << mentor.phoneNumber << "\n" ;
                file.close();
            }

            // Specify the file path from which to read the content
            //QString sfilePath = ":/files/CSC_Mentors.txt";

            // Open the file for reading
            QFile sfile(":/files/Accounting_Mentors");
            sfile.open(QIODevice::ReadOnly | QIODevice::Text);

            QTextStream in(&sfile);
            QString content = in.readAll();

            sfile.close();

            // Set the content to the QLabel
            ui->label_21->setText(content);
            ui->label_21->setStyleSheet("background: transparent;");

    }

    else if (mjrInput == "Business"){
            QString list = "BUSINESS MENTOR'S LIST";
            ui->label_16->setText(list);

            QString filePath = QStandardPaths::writableLocation(QStandardPaths::DocumentsLocation) + ":/files/Businessadministration_Mentors"; // Example: save in the Documents folder
            QFile file(filePath);

            if (file.open(QIODevice::Append | QIODevice::Text))
            {
                QTextStream stream(&file);
                stream << mentor.Fname << " "<< mentor.Lname << " " << mentor.Emailadress << " " << mentor.phoneNumber << "\n" ;
                file.close();
            }

            // Specify the file path from which to read the content
            //QString sfilePath = ":/files/CSC_Mentors.txt";

            // Open the file for reading
            QFile sfile(":/files/CO SC.txt");
            sfile.open(QIODevice::ReadOnly | QIODevice::Text);

            QTextStream in(&sfile);
            QString content = in.readAll();

            sfile.close();

            // Set the content to the QLabel
            ui->label_21->setText(content);
            ui->label_21->setStyleSheet("background: transparent;");

    }
    else {
        //QMessageBox;
    }

}



void StudentDialog::on_pushButton_10_clicked()
{
    ui->stackedWidget->setCurrentIndex(13);
    QFile sfile(":/files/CSC_Mentors.txt");
    sfile.open(QIODevice::ReadOnly | QIODevice::Text);

    QTextStream in(&sfile);
    QString content = in.readAll();

    sfile.close();

    // Set the content to the QLabel
    ui->label_23->setText(content);
    ui->label_23->setStyleSheet("background: transparent;");
}


void StudentDialog::on_pushButton_11_clicked()
{
     ui->stackedWidget->setCurrentIndex(2);
}


void StudentDialog::on_pushButton_12_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}


void StudentDialog::on_pushButton_13_clicked()
{
     ui->stackedWidget->setCurrentIndex(1);
}

//QString studentID = ui->Majortxt->text();
//QString lastName = ui->Lnametxt->text();

void StudentDialog::on_SignUp_clicked()
{

     QString studentID = ui->Majortxt->text();
     QString lastName = ui->Lnametxt->text();
     QString firstName = ui->Fnametxt_3->text();
     QString Password = ui->Passwordtxt->text();
     QString ConPassword = ui->CPasswordtxt->text();

     if (Password == ConPassword) {ui->stackedWidget->setCurrentIndex(1);}
     else {
        QMessageBox::critical(this, "Error", "Passwords do not match. Please try again.");
        // Optionally, clear the password fields or take other actions
        ui->Passwordtxt->clear();
        ui->CPasswordtxt->clear();
     }
     student2 student(studentID, lastName, firstName);
}

QVector <int> enrollementCode = {2019,2020,2021,2022, 2023, 2024};

void StudentDialog::on_pushButton_14_clicked()
{
     int eCode =  ui->lineEdit_7->text().toInt();
     bool isValid = false;

     for(int i=0; i<=4;i++){
        if (enrollementCode.at(i)==eCode){
            ui->stackedWidget->setCurrentIndex(4);
            isValid=true;
            break;
        }
     }

     if (!isValid) {
        QMessageBox::critical(this, "Error", "This code is not valid. Please try again.");
        // Optionally, clear the password fields or take other actions
        //ui->lineEdit_7->clear();
        ui->stackedWidget->setCurrentIndex(11);

     }
}


void StudentDialog::on_pushButton_15_clicked()
{
     reject();
}


void StudentDialog::on_back_clicked()
{
     reject();
}


void StudentDialog::on_pushButton_16_clicked()
{
    reject();
}


void StudentDialog::on_Tutoring_btn_clicked()
{
   QDesktopServices::openUrl(QUrl("https://www.bmcc.cuny.edu/students/lrc/online-tutoring/"));

}


void StudentDialog::on_Resources_btn_clicked()
{
   QDesktopServices::openUrl(QUrl("https://www.bmcc.cuny.edu/student-affairs/accessibility/resources-for-students/"));
}


void StudentDialog::on_internship_btn_clicked()
{
   QDesktopServices::openUrl(QUrl("https://www.bmcc.cuny.edu/academics/experiential/students/opportunities/"));
}

