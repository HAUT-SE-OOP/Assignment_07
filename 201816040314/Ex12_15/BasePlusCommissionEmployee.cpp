//BasePlusCommissionEmployee.cpp
#include <iostream>
#include <stdexcept>
#include "BasePlusCommissionEmployee.h"
using namespace std;
BasePlusCommissionEmployee::BasePlusCommissionEmployee(const string &firstName,const string &lastName,const string &ssn,double sales,double rate,double salary)
:CommissionEmployee(firstName,lastName,ssn,sales,rate)//initialize the data member
{
    setBaseSalary(salary);
}
void BasePlusCommissionEmployee::setBaseSalary(double salary)//to set the baseSalary
{
    if(salary>=0.0)
        baseSalary=salary;
    else
        throw invalid_argument("Salary must be>=0.0");

}
double BasePlusCommissionEmployee::getBaseSalary()const//to get the baseSalary
{
    return baseSalary;
}
double BasePlusCommissionEmployee::earnings()const//to calculate the earning
{
    return getBaseSalary()+CommissionEmployee::earnings();
}
void BasePlusCommissionEmployee::print()const//to print the information
{
    cout<<"base-salaried";
    CommissionEmployee::print();
    cout<<";base salary:"<<getBaseSalary();
}
