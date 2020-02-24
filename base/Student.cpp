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
    DOB = "01/01/1000";
    DOC = "02/02/2000";
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

std::string Student::getDOB()
{
    return DOB;
}//end getDOB

void Student::setDOB(std::string tDOB)
{
    DOB = tDOB;
}//end setDOB

std::string Student::getDOC()
{
    return DOC;
}//end getDOC

void Student::setDOC(std::string tDOC)
{
    DOC = tDOC;
}//end setDOB