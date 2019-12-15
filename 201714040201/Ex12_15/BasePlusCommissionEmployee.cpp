//BasePlusCommissionEmployee.cpp
//BasePlusCommissionEmployee class member-function definitions
#include<iostream>
#include<stdexcept>
#include "BasePlusCommissionEmployee.h"//BasePlusCommissionEmployee class definition

using namespace std;

//constructor
BasePlusCommissionEmployee::BasePlusCommissionEmployee(const string &first,const string &last,const string &ssn,double sales,double rate,double Salary)
    :CommissionEmployee(first,last,ssn,sales,rate)
{
    setBaseSalary(Salary);
}//end BasePlusCommissionEmployee constructor
//set baseSalary
void BasePlusCommissionEmployee::setBaseSalary(double Salary)
{
    if(Salary>0)
        baseSalary=Salary;
    else
        baseSalary=0;
}//end function setGrossSales
//return baseSalary
double BasePlusCommissionEmployee::getBaseSalary()const
{
    return baseSalary;
}//end function getGrossSales

//calculate earnings
//override pure virtual function earnings in Employee
double BasePlusCommissionEmployee::earnings()
{
    return getBaseSalary()+CommissionEmployee::earnings();
}//end function earnings
//print BasePlusCommissionEmployee's information
void BasePlusCommissionEmployee::print()
{
    cout<<"base-salaried : ";
    CommissionEmployee::print();//reuse abstract base-class print function
    cout<<"; base salary : "<<getGrossSales();
}//end function print
