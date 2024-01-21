#include "mentor.h"

Mentor::Mentor()
{

}

Mentor::Mentor(QString ID, QString LN, QString FN, QString MentId, QString PhneNber, QString Email): student2 (ID, LN, FN){
    MentorID = MentId;
    phoneNumber = PhneNber;
    Emailadress = Email;

}

//settors
void Mentor::setMentorId(QString MentId){
    MentorID = MentId;
}
void Mentor::stePhoneNumber(QString PhneNber){
    phoneNumber = PhneNber;
}
void Mentor::setEmailadress(QString Email){
    Emailadress = Email;

}

//gettors
QString Mentor:: getMentorId(){
    return MentorID;
}
QString Mentor::getPhoneNumber(){
    return phoneNumber;
}
QString Mentor::getEmailadress(){
    return Emailadress;
}
