#include "student2.h"

student2::student2()
{


}
student2::student2(QString id, QString LN, QString FN): Person(LN, FN){
    ID = id;

}
void student2::setLname(QString LN){
   Lname = LN;
}
void student2::setFname(QString FN){
    Fname = FN;
}

void student2::setID(QString id){
    ID = id;
}
QString student2::getID(){
    return ID;
}
