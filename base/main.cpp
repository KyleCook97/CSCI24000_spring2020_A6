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

    inFile.open("students.dat");

    Student *s = new Student();
    //just in case there isnt enough memory during runtime
    if (!s)
    {
        std::cout << "Memory allocation failed\n";
    }

    //destroy all students
    ~Student();

    return 0;
}//end main