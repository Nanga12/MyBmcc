#ifndef MENTEE_H
#define MENTEE_H
#include "student2.h"
#include <QString>


class Mentee: public student2
{
public:
    Mentee();
    Mentee (QString IDe, QString LNe, QString FNe, QString MentIde, QString PhneNbere, QString Emaile);

    QString MenteeID, phoneNumberee, Emailadressee;

    //settors
    void setMenteeId(QString MenteeId);
    void stePhoneNumber(QString PhneNberee);
    void setEmailadress(QString Emailee);

    //gettors
    QString getMenteeId();
    QString getPhoneNumber();
    QString getEmailadress();

};

#endif // MENTEE_H
