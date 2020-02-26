//main.cpp

//The objective of this program is to read in a large text file
//and be able to parse the information using classes and objects
//that will be stored on the heap

#include <stdlib.h>
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>

#include "Student.h"
#include "Address.h"
#include "Date.h"

#define SIZE 50

//swapping function used in a bubble sort
void swap(Student *stud1, Student *stud2)
{
    Student temp;
    temp = *stud1;
    *stud1 = *stud2;
    *stud2 = temp;
}//end swap 


int main()
{
    std::ifstream inFile;
    std::ofstream outFile;
    std::string currentLine;
    std::string temp; //this variable holds the date that is parsed and is used right away
    double gpa;
    int credhrs;
    std::stringstream ss;
    std::stringstream converter;

    inFile.open("students.dat");

    Student *s = new Student[SIZE];
    Address *a = new Address[SIZE];
    Date *d = new Date[SIZE];

    //just in case there isnt enough memory during runtime
    if (!s)
    {
        std::cout << "Memory allocation failed\n";
    }//end if
    if (!a)
    {
        std::cout << "Memory allocation failed\n";
    }//end if
    if (!d)
    {
        std::cout << "Memory allocation failed\n";
    }//end if

    //This section reads in the .dat file and parses through it to create
    //Student, Address, and Date objects with corresponding attributes
    for(int k = 1; std::getline(inFile, currentLine); k++)
    {
        

        for(int i = 0; i < SIZE; i++)
        {
            //gets rid of first line
            ss.str(currentLine);

            //loads next line into stream
            std::getline(inFile, currentLine);
            ss.str(currentLine);

            //get surname
            std::getline(ss, temp, ',');
            s[i].setSurname(temp);

            //get givenName
            std::getline(ss, temp, ',');
            s[i].setGivenName(temp);

            //get address line one
            std::getline(ss, temp, ',');
            a[i].setLineOne(temp);
            s[i].setStudLineOne(a[i]);

            //get address line two if it exists
            std::getline(ss, temp, ',');
            a[i].setLineTwo(temp);
            s[i].setStudLineTwo(a[i]);

            //get city
            std::getline(ss, temp, ',');
            a[i].setCity(temp);
            s[i].setStudCity(a[i]);

            //get state
            std::getline(ss, temp, ',');
            a[i].setState(temp);
            s[i].setStudState(a[i]);

            //get zip
            std::getline(ss, temp, ',');
            a[i].setZip(temp);
            s[i].setStudZip(a[i]);

            //get birthday
            std::getline(ss, temp, ',');
            d[i].setDate(temp);
            s[i].setDOB(d[i]);

            //get completetion day
            std::getline(ss, temp, ',');
            d[i].setDate(temp);
            s[i].setDOC(d[i]);

            //get GPA
            std::getline(ss, temp, ',');
            converter << temp;
            converter >> gpa;
            s[i].setGPA(gpa);
            converter.clear();
            converter.str("");

            //get credit hours
            std::getline(ss, temp);
            converter << temp;
            converter >> credhrs;
            s[i].setCreditH(credhrs);
            converter.clear();
            converter.str("");

            //display data
            std::cout << "Last name: " << s[i].getSurname() << std::endl;
            std::cout << "First name: " << s[i].getGivenName() << std::endl;
            std::cout << "Address: " << s[i].getStudLineOne().getLineOne() << " " << s[i].getStudLineTwo().getLineTwo() << std::endl;
            std::cout << "City: " << s[i].getStudCity().getCity() << std::endl;
            std::cout << "State: " << s[i].getStudState().getState() << std::endl;
            std::cout << "Zip Code: " << s[i].getStudZip().getZip() << std::endl;
            std::cout << "Birthday: " << s[i].getDOB().getDate() << std::endl;
            std::cout << "Completeion Date: " << s[i].getDOC().getDate() << std::endl;
            std::cout << "GPA: " << s[i].getGPA() << std::endl;
            std::cout << "Credit Hours: " << s[i].getCreditH() << std::endl;
            std::cout << "--------------------------------" << std::endl;

            //clean the stream for the next line
            ss.clear();
            ss.str("");

        }//end for
    }//end for

    s->fullReport(s);
    s->shortReport(s);

    //bubble sort to alphabatize students
    for(int x = 0; x < SIZE - 1; x++)
    {
        for(int y = 0; y < SIZE - 1; y++)
        {
            if(s[y].getSurname().compare(s[y+1].getSurname()) > 0)
            {
                swap(s+y, s+y+1);
            }//end if
        }//end for
    }//end for

    s->alphaReport(s);

    //destroy all students
    delete[]s;
    //destroy all addresses
    delete[]a;
    //detsroy all dates
    delete[]d;
    
    inFile.close();

    return 0;
}//end main