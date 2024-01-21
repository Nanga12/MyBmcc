#include "mentee.h"

Mentee::Mentee()
{

}
Mentee::Mentee(QString IDe, QString LNe, QString FNe, QString MentIde, QString PhneNbere, QString Emaile): student2 (IDe, LNe, FNe){
    MenteeID = MentIde;
    phoneNumberee = PhneNbere;
    Emailadressee = Emaile;

}

//settors
void Mentee::setMenteeId(QString MentId){
    MenteeID = MentId;
}
void Mentee::stePhoneNumber(QString PhneNber){
    phoneNumberee = PhneNber;
}
void Mentee::setEmailadress(QString Email){
    Emailadressee = Email;

}

//gettors
QString Mentee:: getMenteeId(){
    return MenteeID;
}
QString Mentee::getPhoneNumber(){
    return phoneNumberee;
}
QString Mentee::getEmailadress(){
    return Emailadressee;
}
