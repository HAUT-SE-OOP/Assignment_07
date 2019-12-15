#include <iostream>
#include <stdexcept>
#include "HourlyEmployee.h"
using namespace std;

// constructor
HourlyEmployee::HourlyEmployee( const string &first,
   const string &last, const string &ssn, double wage, double hours, double salary)
   : Employee( first, last, ssn )
{
   setHourlyWage( wage );
   setHours( hours);
   setSalary( salary);
} 

// set HourlyWage
void HourlyEmployee::setHourlyWage( double a )
{
   if ( a >= 0.0 )
      hourlyWage = a;
   else
      throw invalid_argument( "wage must be >= 0.0" );
} 

// return hourlyWage
double HourlyEmployee::getHourlyWage() const
{
    return hourlyWage;
} 

// set hours
void HourlyEmployee::setHours( double a)
{
   if ( a > 0)
      hours = a;
   else
      throw invalid_argument( "hours must be > 0.0" );
} 

// return hours
double HourlyEmployee::getHours() const
{
    return hours;
}

void HourlyEmployee::setSalary( double salary )
{
   if ( salary >= 0.0 )
      salary = salary;
   else
      throw invalid_argument( "salary must be >= 0.0" );
} // end function setSalary

// return salary
double HourlyEmployee::getSalary() const
{
   return salary;
} // end function getSalary

// calculate earnings; override pure virtual function earnings in Employee
double HourlyEmployee::earnings() const
{
  if(getHours()<40)
   return getHourlyWage() * getHours();
  else
   return (2.5*getHours()-60)*getHourlyWage();

} // end function earnings

// print information
void HourlyEmployee::print() const
{
   cout << "Hourly worker: ";
   Employee::print(); // code reuse
   cout << "\nhourly wage: " << getHourlyWage()
      << "; hours : " << getHours();

} // end function print
