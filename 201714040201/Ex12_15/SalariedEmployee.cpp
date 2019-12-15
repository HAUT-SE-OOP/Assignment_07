//SalariedEmployee.cpp
//SalariedEmployee class member-function definitions
#include<iostream>
#include<stdexcept>
#include "SalariedEmployee.h"//SalariedEmployee class definition

using namespace std;

//constructor
SalariedEmployee::SalariedEmployee(const string &first,const string &last,const string &ssn,double Salary)
    :Employee(first,last,ssn)
{
    setWeeklySalary(Salary);
}//end SalariedEmployee constructor
//set salary
void SalariedEmployee::setWeeklySalary(double Salary)
{
    if(Salary>0)
        weeklySalary=Salary;
    else
        weeklySalary=0;
}//end function setWeeklySalary
//return salary
double SalariedEmployee::getWeeklySalary()const
{
    return weeklySalary;
}//end function getWeeklySalary

//calculate earnings
//override pure virtual function earnings in Employee
double SalariedEmployee::earnings()
{
    return getWeeklySalary();
}//end function earnings
//print SalariedEmployee's information
void SalariedEmployee::print()
{
    cout<<"salaried employee: ";
    Employee::print();//reuse abstract base-class print function
    cout<<"\nweekly salary: "<<getWeeklySalary();
}//end function print
