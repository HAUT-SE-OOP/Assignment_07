#include "HourlyEmployee.h"
#include <string>
#include <iostream>
using namespace std;

HourlyEmployee::HourlyEmployee( const string &first , const string &last , const string &ssn , double wwage , double hhour )
:Employee( first , last , ssn )
{
    setWage( wwage );
    setHours( hhour );
}

void HourlyEmployee::setWage( double wwage )
{
    wage = wwage ;
}

double HourlyEmployee::getWage() const
{
    return wage;
}

void HourlyEmployee::setHours( double ppiece )
{
    hours = ppiece;
}

double HourlyEmployee::getHours() const
{
    return hours;
}

double HourlyEmployee::earnings() const
{
    if ( getHours() < 40 )
        return getWage() * getHours() ;
    else
        return ( getHours() - 40 ) * getWage() * 1.5 + 40 * getWage() ;
}

void HourlyEmployee::print() const
{
    cout << "Hourly Worker : ";
    Employee::print();
    cout << "\n Wage : " << getWage() << "; Hours : " << getHours() ;
}
