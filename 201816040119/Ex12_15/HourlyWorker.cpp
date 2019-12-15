// Lab 2: CommissionEmployee.cpp
// Class CommissionEmployee member-function definitions.
#include <iostream>
using namespace std;

#include "HourlyWorker.h" // CommissionEmployee class definition

// constructor
HourlyWorker::HourlyWorker(
   const string &first, const string &last, const string &ssn,
   double sales, double rate ):Employee(first,last,ssn)
{
   setWage( sales ); // validate and store gross sales
   setHours( rate ); // validate and store commission rate
} // end CommissionEmployee constructor
// set gross sales amount
void HourlyWorker::setWage( double sales )
{
   if( sales >=0.0 )
    wage = sales;
    else
    throw invalid_argument("WAge must be>=0.0");
} // end function setGrossSales

// return gross sales amount
double HourlyWorker::getWage() const
{
   return wage;
} // end function getGrossSales

// set commission rate
void HourlyWorker::setHours( double rate )
{
    if( rate > 0.0 )
    hours =rate;
    else
    throw invalid_argument("Weekly salary must be>=0.0and<1.0");
} // end function setCommissionRate

// return commission rate
double HourlyWorker::getHours() const
{
   return hours;
} // end function getCommissionRate

// calculate earnings
double HourlyWorker::earning() const
{
   if(hours<=40)
   return getWage() * getHours();
   else
    return getWage() * (getHours()-40);
} // end function earnings
// print CommissionEmployee object
void HourlyWorker::print() const
{
   cout << "commission employee: ";
     Employee::print();
     cout << "\ngross sales: " << getWage()
      << "\ncommission rate: " <<getHours();
} // end function print
