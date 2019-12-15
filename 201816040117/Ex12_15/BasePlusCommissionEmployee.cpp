
#include <iostream>
using namespace std;

// BasePlusCommissionEmployee class definition
#include "BasePlusCommissionEmployee.h"

// constructor
BasePlusCommissionEmployee::BasePlusCommissionEmployee(
   string first, string last, string ssn,
   double sales, double rate, double salary )
   // initialize composed object
   : CommissionEmployee(first,last,ssn,sales,rate)
{
   setBaseSalary( salary ); // validate and store base salary
} // end BasePlusCommissionEmployee constructor

// set base salary
void BasePlusCommissionEmployee::setBaseSalary( double salary )
{
   baseSalary = ( salary < 0.0 ) ? 0.0 : salary;
} // end function setBaseSalary

// return base salary
double BasePlusCommissionEmployee::getBaseSalary()
{
   return baseSalary;
} // end function getBaseSalary

// calculate earnings
double BasePlusCommissionEmployee::earnings()
{
   return getBaseSalary() +CommissionEmployee::earnings();

} // end function earnings

// print BasePlusCommissionEmployee object
void BasePlusCommissionEmployee::print()
{
   cout << "base-salaried ";

   // invoke composed CommissionEmployee object's print function
   CommissionEmployee::print();
   cout << "\nbase salary: " << getBaseSalary();
} // end function print



