//HourlyEmployee.cpp
#include <iostream>
#include "HourlyEmployee.h"
#include <stdexcept>
using namespace std;

HourlyEmployee::HourlyEmployee( const string &first,
    const string &last, const string &ssn, double w, double h)
    : Employee(first,last,ssn)
{
    setWage( w );
    setHours( h);
}


void HourlyEmployee::setWage( double w )
{
    wage=w;
}

double HourlyEmployee::getWage() const
{
     return wage;
}

void HourlyEmployee::setHours( double h )
{
    hours=h;
}

double HourlyEmployee::getHours() const
{
     return hours;
}

double HourlyEmployee::earnings() const
{
    if(hours<=40)
        return getHours()* getWage();
    else
        return 40*getWage()+(getHours()-40)*getWage()*1.5;
}
void HourlyEmployee::print() const
{
    cout <<"hourly employee:";
    Employee::print();
    cout <<"\nhours:" << getHours()
     << "\nwage:"<< getWage();
}
