#include<iostream>
#include<stdexcept>
#include"BasePlusCommissionEmployee.h"
using namespace std;

 BasePlusCommissionEmployee::BasePlusCommissionEmployee(string first,string last,string ssn,double sales,double rate,double salary)
 :CommissionEmployee(first,last,ssn,sales,rate)
 {
     setBaseSalary(salary);
 }
void BasePlusCommissionEmployee::setBaseSalary(double salary)
{
    if(salary>=0.0)
        baseSalary=salary;
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
    cout<<"Base-salaried";
    CommissionEmployee::print();
    cout<<";base salary:"<<getBaseSalary();
}
