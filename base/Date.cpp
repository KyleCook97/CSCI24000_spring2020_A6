//Date.cpp

#include "Date.h"
#include <string>

Date::Date()
{
    day = 30;
    month = 12;
    year = 2020;
    date = "30/12/2020";
}//end constuctor

Date::~Date()
{

}//end destructor

int Date::getDay()
{
    return day;
}//end getDay

void Date::setDay(int tDay)
{
    day = tDay;
}//end setDay

int Date::getMonth()
{
    return month;
}//end getMonth

void Date::setMonth(int tMonth)
{
    month = tMonth;
}//end setMonth

int Date::getYear()
{
    return year;
}//end getYear

void Date::setYear(int tYear)
{
    year = tYear;
}//end setYear

std::string Date::getDate()
{
    return date;
}//end getDate

void Date::setDate(std::string tDate)
{
    date = tDate;
}//end setDate
