// Assignment_07: HourlyEmployee.cpp
// Class HourlyEmployee member-function definitions.
#include <iostream>
#include <stdexcept>
#include "HourlyEmployee.h"// HourlyEmployee class definition
using namespace std;

// constructor
HourlyEmployee::HourlyEmployee( const string &first,
    const string &last, const string &ssn,
    double wages, double hour )
    : Employee( first, last, ssn )
{
   setWage( wages ); // validate wage
   setHours( hour ); // validate hour
} // end HourlyEmployee constructor

// set wage amount
void HourlyEmployee::setWage( double wages )
{
   if( wages >= 0 )
        wage = wages;
   else
        throw invalid_argument( "Wage must be >=0.0" );
} // end function setWage

// return wage amount
double HourlyEmployee::getWage() const
{
   return wage;
} // end function getWage

// set Hours
void HourlyEmployee::setHours( double hour )
{
   if( hour >= 0 )
        hours = hour;
   else
        throw invalid_argument( "Hours must be >=0.0" );
} // end function setHours

// return Hours
double HourlyEmployee::getHours() const
{
   return hours;
} // end function getHours

// calculate earnings
double HourlyEmployee::earnings() const
{
   if( getHours() <= 40 )
        return getHours() * getWage();
   else
        return 40 * getWage() + ( getHours() - 40 ) * 1.5 * getWage();
} // end function earnings

// print HourlyEmployee object
void HourlyEmployee::print() const
{
   cout << "HourlyEmployee employee: ";
   Employee::print();
   cout << "\nwage: " << getWage()
      << "; hours: " << getHours();
} // end function print
