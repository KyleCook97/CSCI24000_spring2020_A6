//Student.h

#ifndef STUDENT_H
#define STUDENT_H

#include <string>

class Student
{
    private:
        std::string surname;
        std::string givenName;
        double GPA;
        int creditHours;
        std::string DOB;
        std::string DOC;

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
        std::string getDOB();
        void setDOB(std::string tDOB);
        std::string getDOC();
        void setDOC(std::string tDOC);
        void fullReport(Student[]);
        void simpleReport(Student[]);
        void alphaReport(Student[]);
};

#endif