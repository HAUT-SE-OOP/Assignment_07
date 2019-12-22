#include <iostream>
#include <stdexcept>
#include "BasePlusCommissionEmployee.h"
using namespace std;

BasePulsCommissionEmployee::BasePulsCommissionEmployee(const string &first,const string &last,const string &ssn,double sales,double rate,double salary)
    :CommissionEmployee(first,last,ssn,sales,rate)
{
    setBaseSalary(salary);
}
void BasePulsCommissionEmployee::setBaseSalary(double salary)
{
    if(salary>=0.0)
        baseSalary=salary;
    else
        throw invalid_argument("Salay must be >=0.0");
}
double BasePulsCommissionEmployee::getBaseSalary()const
{
    return baseSalary;
}
double BasePulsCommissionEmployee::earnings()
{
    return getBaseSalary()+CommissionEmployee::earnings();
}
void BasePulsCommissionEmployee::print()
{
    cout<<"base-salaried ";
    CommissionEmployee::print();
    cout<<"; base salary: "<<getBaseSalary();
}
