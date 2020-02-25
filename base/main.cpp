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
            ss.str(currentLine);
            std::getline(inFile, currentLine);
            ss.str(currentLine);
            std::getline(ss, temp, ',');
            s[i].setSurname(temp);
            std::getline(ss, temp, ',');
            s[i].setGivenName(temp);
            std::cout << s[i].getSurname() << " ";
            std::cout << s[i].getGivenName() << std::endl;
            ss.clear();
            ss.str("");

        }//end for
    }//end for

    //destroy all students
    delete[]s;

    return 0;
}//end main