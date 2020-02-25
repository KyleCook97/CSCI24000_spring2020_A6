//Address.cpp

#include "Address.h"
#include <string>

Address::Address()
{
    lineOne = "123 Fake St";
    lineTwo = "Apt C";
    city = "Fakeville";
    state = "Texas";
    zip = "69420";
}//end constructor

Address::Address(std::string, std::string, std::string, std::string, std::string)
{
    setLineOne(tLineOne);
    setLineTwo(tLineTwo);
    setCity(tCity);
    setState(tState);
    setZip(tZip);
}//end overloaded constructor

Address::~Address()
{

}//end destuctor

std::string Address::getLineOne()
{
    return lineOne;
}//end getLineOne

void Address::setLineOne(std::string tLineOne)
{
    lineOne = tLineOne;
}//end setLineOne

std::string Address::getLineTwo()
{
    return lineTwo;
}//end getLineTwo

void Address::setLineTwo(std::string tLineTwo)
{
    lineTwo = tLineTwo;
}//end setLineTwo

std::string Address::getCity()
{
    return city;
}//end getCity

void Address::setCity(std::string tCity)
{
    city = tCity;
}//end setCity

std::string Address::getState()
{
    return state;
}//end getState

void Address::setState(std::string tState)
{
    state = tState;
}//end setState

std::string Address::getZip()
{
    return zip;
}//end getZip

void Address::setZip(std::string tZip)
{
    zip = tZip;
}//end setZip