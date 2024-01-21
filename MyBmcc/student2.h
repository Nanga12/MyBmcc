#ifndef STUDENT2_H
#define STUDENT2_H
#include "person.h"
#include <QString>


class student2: public Person
{
public:
    student2();
    student2(QString ID, QString LN, QString FN);
    void setLname(QString LN) override;
    void setFname(QString FN) override;
    QString ID;
    void setID(QString id);
    QString getID();

};

#endif // STUDENT2_H
