//HourlyWoker.cpp
#include <iostream>
#include <stdexcept>
#include "HourlyWoker.h"
using namespace std;

//constructor
HourlyWoker::HourlyWoker(
   const string &first, const string &last, const string &ssn,
   double w, double h )
: Employee( first, last, ssn )
{
    setWage( w );
    setHour( h );
}//end CommissionEmployee constructor

void HourlyWoker::setWage( double w )
{
    if( w >= 0.0 )
        wage = w;
    else
        throw invalid_argument( "The wage must be >= 0.0 ")
}

double HourlyWoker::getWage()
{
    return wage;
}

void HourlyWoker::setHours( double h )
{
    if( h >= 0.0 )
        hour = h;
    else
        throw invalid_argument( "The hours must be >= 0.0 ")
}

double HourlyWoker::getHours()
{
    return hours;
}

double HourlyWoker::earnings() const
{
    return getWage()*getHour();
}//end function earnings

void HourlyWoker::print() const
{
    cout << "Hourlyworker: ";
    Employee::print(); //code reuse
    cout << "\nwage: " << getWage() << "hour: " << getHour();
}//end function print
