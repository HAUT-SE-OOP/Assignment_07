//BasePlusCommissionEmployee.cpp
//BasePlusCommissionEmployee member function definition
#include<iostream>
#include<stdexcept>
#include"BasePlusCommissionEmployee.h"
using namespace std;

//constructor
BasePlusCommissionEmployee::BasePlusCommissionEmployee(const string &first,const string &last,const string &ssn,
                                                       double sales,double rate,double salary)
                           :CommissionEmployee(first,last,ssn,sales ,rate)
{
    setBaseSalary(salary);
}//end constructor

//set base salary
void BasePlusCommissionEmployee::setBaseSalary(double salary)
{
    if(salary>=0.0)
        baseSalary=salary;
    else
        throw invalid_argument("Salary must be >0");
}//end set salary

//return salary
double BasePlusCommissionEmployee::getBaseSalary()const
{
    return baseSalary;
}//end

//calculate earnings
//override pure virtual function earnings in CommissionEmployee
double BasePlusCommissionEmployee::earnings()const
{
    return getBaseSalary()+CommissionEmployee::earnings();
}//end

void BasePlusCommissionEmployee::print()const
{
    cout<<"base salaried ";
    CommissionEmployee::print();
    cout<<";base salary "<<getBaseSalary();
}//end




