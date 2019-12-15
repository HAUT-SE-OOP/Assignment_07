#include <iostream>
#include "BasePlusCommissionEmployee.h"
#include <stdexcept>
using namespace std;



BasePlusCommissionEmployee::BasePlusCommissionEmployee(const string &first, const string &last, const string &ssn,double sales,double rate,double salary)//constructor
:CommissionEmployee(first,last,ssn,sales,rate)
{
    setBaseSalary(salary);
}
void BasePlusCommissionEmployee::setBaseSalary(double salary)
{
    if(salary>=0.0)
    {
        baseSalary=salary;
    }
    else
    {
        throw invalid_argument("Salary must be >= 0.0");
    }
}
double BasePlusCommissionEmployee::getBaseSalary()const
{
    return baseSalary;
}
double BasePlusCommissionEmployee::earnings()const// calculate wage
{
    return getBaseSalary()+CommissionEmployee::earnings();
}
void BasePlusCommissionEmployee::print()const//print worker information
{
    cout<<"base-salaried: ";
    CommissionEmployee::print();
    cout<<"; base salary: "<<getBaseSalary();
}
