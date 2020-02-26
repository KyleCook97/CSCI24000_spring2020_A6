//Student.cpp

#include "Student.h"
#include <stdlib.h>
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>

Student::Student()
{
    surname = "ymous";
    givenName = "anon";
    GPA = 0.0;
    creditHours = 0;
}//end constructor

Student::Student(std::string, std::string, double, int, std::string, std::string)
{
    setSurname(tSurname);
    setGivenName(tGivenName);
    setGPA(tGPA);
    setCreditH(tCreditHours);
    setDOB(tDOB);
    setDOC(tDOC);
}//end overloaded constructor

Student::~Student()
{
    
}//end destructor

std::string Student::getSurname()
{
    return surname;
}//end getSurname

void Student::setSurname(std::string tSurname)
{
    surname = tSurname;
}//end setSurname

std::string Student::getGivenName()
{
    return givenName;
}//end getGivenName

void Student::setGivenName(std::string tGivenName)
{
    givenName = tGivenName;
}//end setGivenName

double Student::getGPA()
{
    return GPA;
}//end getGPA

void Student::setGPA(double tGPA)
{
    GPA = tGPA;
}//end setGPA

int Student::getCreditH()
{
    return creditHours;
}//end getCreditH

void Student::setCreditH(int tCreditHours)
{
    creditHours = tCreditHours;
}//end setCreditH

Date Student::getDOB()
{
    return DOB;
}//end getDOB

void Student::setDOB(Date tDOB)
{
    DOB = tDOB;
}//end setDOB

Date Student::getDOC()
{
    return DOC;
}//end getDOC

void Student::setDOC(Date tDOC)
{
    DOC = tDOC;
}//end setDOB

Address Student::getStudLineOne()
{
    return studLineOne;
}//end getStudLineOne

void Student::setStudLineOne(Address TstudLineOne)
{
    studLineOne = TstudLineOne;
}//end setStudLineOne

Address Student::getStudLineTwo()
{
    return studLineTwo;
}//end getStudLineTwo

void Student::setStudLineTwo(Address TstudLineTwo)
{
    studLineTwo = TstudLineTwo;
}//end setStudLineTwo

Address Student::getStudCity()
{
    return studCity;
}//end getStudCity

void Student::setStudCity(Address TstudCity)
{
    studCity = TstudCity;
}//end setStudCity

Address Student::getStudState()
{
    return studState;
}//end getStudState

void Student::setStudState(Address TstudState)
{
    studState = TstudState;
}//end setStudState

Address Student::getStudZip()
{
    return studZip;
}//end getStudZip

void Student::setStudZip(Address TstudZip)
{
    studZip = TstudZip;
}//end getStudZip

void Student::fullReport(Student s[])
{
    std::ofstream outFile;

    outFile.open("fullReport.txt");
    for(int i = 0; i < 50; i++)
    {
            outFile << "Last name: " << s[i].getSurname() << std::endl;
            outFile << "First name: " << s[i].getGivenName() << std::endl;
            outFile << "Address: " << s[i].getStudLineOne().getLineOne() << " " << s[i].getStudLineTwo().getLineTwo() << std::endl;
            outFile << "City: " << s[i].getStudCity().getCity() << std::endl;
            outFile << "State: " << s[i].getStudState().getState() << std::endl;
            outFile << "Zip Code: " << s[i].getStudZip().getZip() << std::endl;
            outFile << "Birthday: " << s[i].getDOB().getDate() << std::endl;
            outFile << "Completeion Date: " << s[i].getDOC().getDate() << std::endl;
            outFile << "GPA: " << s[i].getGPA() << std::endl;
            outFile << "Credit Hours: " << s[i].getCreditH() << std::endl;
            outFile << "--------------------------------" << std::endl;
    }//end for
    outFile.close();
}//end fullReport

void Student::shortReport(Student s[])
{
    std::ofstream outFile;

    outFile.open("shortReport.txt");
    for(int i = 0; i < 50; i++)
    {
        outFile << s[i].getSurname() << " " << s[i].getGivenName() << std::endl;
    }//end for
    outFile.close();
}//end shortReport

void Student::alphaReport(Student s[])
{
    std::ofstream outFile;

    outFile.open("alphaReport.txt");
    for(int i = 0; i < 50; i++)
    {
        outFile << s[i].getSurname() << " " << s[i].getGivenName() << std::endl;
    }//end for
    outFile.close();
}//end alphaReport