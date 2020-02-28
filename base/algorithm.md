# Algorithm 6

## Goals -
    - Read in a .dat file
    - Parse through the file
    - Use a Student, Address, and Date class with attributes and methods
    - Store all objects using the heap
    - Use the "new" keyword to create objects
    - Use a destructor
    - Output 3 different types of reports: full, simple, and alphabetical
---
## Input - 
    - .dat file
    - Array of objects (Student, Address, Date)
---
## Output - 
    - Full report: all student info
    - Simple report: students first and last names
    - Alpha report: students first and last names but in alphabetical order
---
### get/set() functions
    - Allow the program to access the attributes of the objects i.e. a student's name

### fullReport(Student[]): void
    - For each element of the array
        - Write to a new .txt file all of the students info

### simpleReport(Student[]): void
    - For each element of the array
        - Write to a new .txt file of just the students first and last names

### alphaReport(Student[]): void
    - For each element of the array
        - Write to a new .txt file of just the students first and last names in alphabetical order

### swap(): void
    - A simple swap function to be used in a bubble sort

### In main()
    - Open .dat file
    - For each line
        - For each Student, Address, and Date object
            - Load the line into a stringstream
            - Use the set() methods of each attribute to assign correct values while parsing through each line
    - Call fullReport()
    - Call simpleReport()
    - Bubble sort the last names of each Student objects
        - Call Sort() when neccessary
    - Call alphaReport()
    - Call all destructors for each object
    - Close .dat file
    