#include <iostream>
#include "date.h"



        Date::Date(int day, int month, int year): 
        day(day),
        month(month),
        year(year)
        {
            validate(day, month, year);
        }

        Date::~Date(){}

        int Date::getDay() const{
            return this->day;
        }
        int Date::getMonth() const{
            return this->month;
        }
        int Date::getYear() const{
            return this->year;
        }
        void Date::validate(int day, int month, int year) {
        int chek;
        int LeapYear;

        if ( month > 12 || month < 1) {
            throw InvalidDate ("invalid month");
        }

        LeapYear = this->year % 4;

        chek = (this->month % 2) ^ (this->month / 8);

            if ( chek == 1 ) {
                if (this->day > 31) {
                    throw InvalidDate ("invalid day");
                };
            } else if ( this->month == 2 ) {
                if ( LeapYear == 0) {
                    if (this->day > 28) {
                        throw InvalidDate("invalid day");
                    }
                } else {
                    if (this->day > 29) {
                        throw InvalidDate("invalid day");
                    }
                }
        } else {
                if (this->day > 30) {
                    throw InvalidDate("invalid day");
                }
            }
    }

std::ostream& operator<<(std::ostream& out, const Date& date){
    if ( date.getDay() < 10) {
        out<<"Day 0"<< date.getDay() <<std::endl;
    } else {
        out<<"Day "<< date.getDay() <<std::endl;
    }
    out<<"Month "<< date.getMonth() <<std::endl;
    out<<"Year "<< date.getYear() <<std::endl;
}

