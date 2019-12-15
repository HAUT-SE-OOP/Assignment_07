#include<iostream>
#include"Employee.h"
#include<string.h>
using namespace std;
#include"CommissionEmployee.h"
#include"BasePlusCommissionEmployee.h"
#include<stdexcept>
BasePlusCommissionEmployee::BasePlusCommissionEmployee(string f,string l,string s,double a,double r,double y)
                                    :CommissionEmployee(f,l,s,a,r)
{
    setBaseSalary(y);
}
void BasePlusCommissionEmployee::setBaseSalary(double y)
{
    if(y>=0.0)
        baseSalary=y;
    else
        throw invalid_argument("Salary must be >=0.0");
}
double BasePlusCommissionEmployee::getBaseSalary()
{
    return baseSalary;
}
double BasePlusCommissionEmployee::earnings()
{
    return getBaseSalary()+CommissionEmployee::earnings();
}
void BasePlusCommissionEmployee::print()
{
    cout<<"base-salaried";
    CommissionEmployee::print();
    cout<<"; base salary:"<<getBaseSalary();
}

