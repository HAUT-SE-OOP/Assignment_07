#include <iostream>
#include <stdexcept>
#include "BasePluseEmployee.h"
using namespace std;

BasePlusCommissionEmployee::BasePlusCommissionEmployee(const string &first,const string &last,const string &ssn,double sales,double rate,double salary)
:CommissionEmployee(first,last,ssn,sales,rate) //the constructor of BasePlusCommissionEmployee
{
    setBaseSalary(salary);
}

void BasePlusCommissionEmployee::setBaseSalary(double salary) //define function to setBaseSalary
{
    if(salary >= 0.0)
        baseSalary = salary;
}

double BasePlusCommissionEmployee::getBaseSalary()const //define function to getBaseSalary
{
    return baseSalary;
}

double BasePlusCommissionEmployee::earnings()const //define function to earnings
{
    return getBaseSalary() + CommissionEmployee::earnings();
}

void BasePlusCommissionEmployee::print()const //define function to print
{
    cout << "base-salaried ";
    CommissionEmployee::print();
    cout << "; base salary: " << getBaseSalary();
}
