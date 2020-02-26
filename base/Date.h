//Date.h

#ifndef DATE_H
#define DATE_H

#include <string>

class Date
{
    private:
        int day;
        int month;
        int year;
        std::string date;

        //temporary variables
        int tDay;
        int tMonth;
        int tYear;
        std::string sDate;

    public:

        Date();
        ~Date();

        int getDay();
        void setDay(int tDay);

        int getMonth();
        void setMonth(int tMonth);

        int getYear();
        void setYear(int tYear);
        
        std::string getDate();
        void setDate(std::string tDate);

};

#endif