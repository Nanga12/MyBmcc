#include "person.h"

Person::Person()
{
    Lname =" ";
    Fname =" ";
}
Person::Person(QString LN, QString FN ){
    Lname = LN;
    Fname = FN;
}
QString Person:: getLname(){
    return Lname;
}
QString Person:: getFname(){
    return Fname;
}
