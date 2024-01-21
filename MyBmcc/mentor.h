#ifndef MENTOR_H
#define MENTOR_H
#include "student2.h"
#include <QString>


class Mentor: public student2
{
public:

    Mentor();
    Mentor(QString ID, QString LN, QString FN, QString MentId, QString PhneNber, QString Email);

    QString MentorID, phoneNumber, Emailadress;

     //settors
    void setMentorId(QString MentId);
    void stePhoneNumber(QString PhneNber);
    void setEmailadress(QString Email);

    //gettors
    QString getMentorId();
    QString getPhoneNumber();
    QString getEmailadress();


};

#endif // MENTOR_H
