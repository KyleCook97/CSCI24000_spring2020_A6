//Student.h

#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include "Address.h"
#include "Date.h"

class Student
{
    private:
        std::string surname;
        std::string givenName;
        double GPA;
        int creditHours;
        Date DOB;
        Date DOC;
        Address studLineOne;
        Address studLineTwo;
        Address studCity;
        Address studState;
        Address studZip;

        //temporary variables
        std::string tSurname;
        std::string tGivenName;
        double tGPA;
        int tCreditHours;
        Date tDOB;
        Date tDOC;
        Address TstudLineOne;
        Address TstudLineTwo;
        Address TstudCity;
        Address TstudState;
        Address TstudZip;

    public:
        Student();
        Student(std::string, std::string, double, int, std::string, std::string);
        ~Student();

        std::string getSurname();
        void setSurname(std::string tSurname);

        std::string getGivenName();
        void setGivenName(std::string tGivenName);

        double getGPA();
        void setGPA(double tGPA);

        int getCreditH();
        void setCreditH(int tCreditHours);

        Date getDOB();
        void setDOB(Date tDOB);

        Date getDOC();
        void setDOC(Date tDOC);

        Address getStudLineOne();
        void setStudLineOne(Address TstudLineOne);

        Address getStudLineTwo();
        void setStudLineTwo(Address TstudLineTwo);

        Address getStudCity();
        void setStudCity(Address TstudCity);

        Address getStudState();
        void setStudState(Address TstudState);

        Address getStudZip();
        void setStudZip(Address TstudZip);

        void fullReport(Student s[]);
        void shortReport(Student s[]);
        void alphaReport(Student s[]);
};

#endif