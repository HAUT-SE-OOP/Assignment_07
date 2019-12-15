#include <iostream>
#include <stdexcept>

#include "HourlyEmployee.h"
#include <string>
using namespace std;

//HourlyEmployee constructor
HourlyEmployee::HourlyEmployee( const string &first, const string &last, const string &ssn,double hourlywage, double hour)
    : Employee( first, last, ssn )
{
   setHourlyWage(hourlywage);
   setHours(hour);
}

void HourlyEmployee::setHourlyWage( double hourlywage )
{
    if( hourlywage >= 0.0 )
    {//判断
        hourlyWage=hourlywage;
    }
    else
        throw invalid_argument( "Hourly Wage must be >= 0.0 " );

}
double HourlyEmployee::getHourlyWage() const
{
    return hourlyWage;
}

void HourlyEmployee::setHours( double hour )
{
    if( hour >= 0 )
    {//判断
        hours=hour;
    }
    else
        throw invalid_argument( "Hours must be >= 0.0" );

}
double HourlyEmployee::getHours() const
{
    return hours;
}
//calculate earnings
double HourlyEmployee::earnings() const
{
    if(getHours()<= 40)
    {
        return getHours()*getHourlyWage();
    }
    else
    {
        return (getHours()-40)*1.5*getHourlyWage()+40*getHourlyWage();
    }
}

void HourlyEmployee::print() const
{
    cout << "hourly employee: ";
    Employee::print();
    cout<<"\nhourly wage: " << getHourlyWage()
    <<";\nhours: " << getHours();
}




