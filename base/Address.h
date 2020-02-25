//Address.h

#ifndef ADDRESS_H
#define ADDRESS_H

#include <string>

class Address
{
    private:
        std::string lineOne;
        std::string lineTwo;
        std::string city;
        std::string state;
        std::string zip;

        //temporary variables
        std::string tLineOne;
        std::string tLineTwo;
        std::string tCity;
        std::string tState;
        std::string tZip;

    public:
        Address();
        Address(std::string, std::string, std::string, std::string, std::string);
        ~Address();
        std::string getLineOne();
        void setLineOne(std::string tLineOne);
        std::string getLineTwo();
        void setLineTwo(std::string tLineTwo);
        std::string getCity();
        void setCity(std::string tCity);
        std::string getState();
        void setState(std::string tState);
        std::string getZip();
        void setZip(std::string tZip);
};

#endif