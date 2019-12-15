#include <iostream>
#include <stdexcept>

#include "BasePlusCommissionEmployee.h"// BasePlusCommissionEmployee class definition
using namespace std ;

BasePlusCommissionEmployee::BasePlusCommissionEmployee(const string &first,const string &last,const string &ssn, double sales, double rate,double salary) // initialize composed object
  :CommissionEmployee(first , last , ssn, sales,rate)

{
      setBaseSalary(salary);
}

void BasePlusCommissionEmployee::setBaseSalary(double salary)
{
    if(salary>=0.0)
       BaseSalary =salary;
    else
        throw invalid_argument("Base Salary must be >= 0.0");

}

double BasePlusCommissionEmployee::getBaseSalary()const
{
    return BaseSalary;

}

double BasePlusCommissionEmployee::earnings()const
{
    return getBaseSalary()+CommissionEmployee::earnings();
}// end function earnings

// print BasePlusCommissionEmployee object

void BasePlusCommissionEmployee::print()const
{
    cout <<"Base-Salary:";
    // invoke composed CommissionEmployee's print function
    CommissionEmployee::print();
    cout << "\ngross sales:" << getBaseSalary()
    <<"; Base Salary : "<<getBaseSalary() ;
}// end function print
