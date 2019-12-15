#include <iostream>
using namespace std;

// BasePlusCommissionEmployee class definition
#include "SalariedEmployee.h"

SalariedEmployee::SalariedEmployee(
const string &first, const string &last, const string &ssn,double salary  )
   : Employee(first,last,ssn)
{
    setWeeklySalary(salary);
} // end Employee constructor

// set commission employee's first name
void SalariedEmployee::setWeeklySalary( double salary )
{
   if(salary>=0.0)
    weeklySalary=salary;
   else
    throw invalid_argument("Weekly salary must be>=0.0");
} // end function setFirstName

// return commission employee's first name
double SalariedEmployee::getWeeklySalary() const
{
   return weeklySalary;
}

double SalariedEmployee::earning() const
{
   return getWeeklySalary();
}

void SalariedEmployee::print() const
{
   cout << "salaried employee:";
   Employee::print();
   cout<<"\nweekly salary:"<<getWeeklySalary();
} // end function print
