#include <iostream>
#include <stdexcept>

using namespace std;

#include "SalariedEmployee.h"
#include "Employee.h"
// constructor
SalariedEmployee::SalariedEmployee(
   const string &first, const string &last, const string &ssn,double salary)
   :Employee(first,last,ssn)
{
  setWeeklySalary(salary);
} // end Employee constructor

// set first name
void SalariedEmployee::setWeeklySalary( double salary )
{
    if(salary>=0.0)
        weeklySalary=salary;
    else
        throw invalid_argument("weekly salary must be >= 0.0 ");
} // end function setWeeklySalary

double SalariedEmployee::getWeeklySalary()const
{
    return weeklySalary;
}
double SalariedEmployee::earnings()const
{
    return getWeeklySalary();
}
// print CommissionEmployee object
void SalariedEmployee::print() const
{
   cout <<"salaried Employee: ";
//   Employee::print();
   cout<<"\nweekly salary: "<<getWeeklySalary();
} // end function print
