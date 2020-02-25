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

int main()
{
    std::ifstream inFile;
    std::ofstream outFile;
    std::string currentLine;
    std::string temp;
    std::stringstream ss;
    std::stringstream converter;

    inFile.open("students.dat");

    Student *s = new Student[50];
    //just in case there isnt enough memory during runtime
    if (!s)
    {
        std::cout << "Memory allocation failed\n";
    }//end if

    for(int k = 1; std::getline(inFile, currentLine); k++)
    {
        

        for(int i = 0; i < 50; i++)
        {
            Address *a = new Address();
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
            a->setLineOne(temp);

            //get address line two if it exists
            std::getline(ss, temp, ',');
            a->setLineTwo(temp);

            //get city
            std::getline(ss, temp, ',');
            a->setCity(temp);

            //get state
            std::getline(ss, temp, ',');
            a->setState(temp);

            //get zip
            std::getline(ss, temp, ',');
            a->setZip(temp);

            //display data
            std::cout << "Last name: " << s[i].getSurname() << std::endl;
            std::cout << "First name: " << s[i].getGivenName() << std::endl;
            std::cout << "Address: " << a->getLineOne() << " " << a->getLineTwo() << std::endl;
            std::cout << "City: " << a->getCity() << std::endl;
            std::cout << "State: " << a->getState() << std::endl;
            std::cout << "Zip Code: " << a->getZip() << std::endl;
            std::cout << "--------------------------------" << std::endl;

            //clean the stream for the next line
            ss.clear();
            ss.str("");

            //destroy the address object
            delete a;
        }//end for
    }//end for

    //destroy all students
    delete[]s;

    return 0;
}//end main