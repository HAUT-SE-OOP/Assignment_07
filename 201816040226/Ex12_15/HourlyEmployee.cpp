// Class CommissionEmployee member-function definitions.
#include <iostream>
using namespace std;
#include <stdexcept>
#include "HourlyWorker.h" // CommissionEmployee class definition

// constructor
HourlyWorker::HourlyWorker(
   const string &first, const string &last, const string &ssn,
   double wage, double hours )
   :Employee(first,last,ssn)
{
   setWage( wage ); // validate and store gross sales
   setHours( hours ); // validate and store commission rate
} // end CommissionEmployee constructor

// set gross sales amount
void HourlyWorker::setWage( double wage )
{
   Wage = ( wage < 0.0 ) ? 0.0 : wage;
} // end function setGrossSales

// return gross sales amount
double HourlyWorker::getWage() const
{
   return Wage;
} // end function getGrossSales

// set commission rate
void HourlyWorker::setHours( double hours)
{
   Hours = ( hours > 0.0 ) ? hours : 0.0;
} // end function setCommissionRate

// return commission rate
double HourlyWorker::getHours() const
{
   return Hours;
} // end function getCommissionRate

// calculate earnings
double HourlyWorker::earnings() const
{
    if( Hours >= 0.0 && Hours <= 40){
        return getWage()* getHours();
    }
    else
    {
        return 1.5*getWage()*getHours();
    }
} // end function earnings

// print CommissionEmployee object
void HourlyWorker::print()
{
   cout << "Hourly Worker: ";
   Employee::print();
   cout<< "\nWage : " <<getWage()
      << "\nHours: " <<getHours();
} // end function print
