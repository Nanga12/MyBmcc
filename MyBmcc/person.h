#ifndef PERSON_H
#define PERSON_H
#include <QString>


class Person
{
public:
    Person();
    Person(QString LN, QString FN );
    QString Lname, Fname;
  virtual void setLname(QString LN)=0;
  virtual void setFname(QString FN)=0;
    QString getLname();
    QString getFname();

};

#endif // PERSON_H
