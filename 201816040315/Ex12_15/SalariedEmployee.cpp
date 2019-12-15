//SalariedEmployee .cpp
//SalariedEmployee class member function definition
#include <iostream>
#include <stdexcept>
#include "SalariedEmployee.h"
using namespace std;

//constructor
SalariedEmployee::SalariedEmployee(const string &first,const string &last,
                                   const string &ssn,double salary)
    :Employee(first,last ,ssn)
{
    setWeeklySalary( salary );
}//end SalariedEmployee constructor

//set salary
void SalariedEmployee::setWeeklySalary(double salary)
{
    if(salary>=0.0)
        weeklySalary = salary;
    else
        throw invalid_argument("weekly salary must be >=0.0");
}//end function setWeeklySalary

//return salary
double SalariedEmployee::getWeeklySalary()const
{
    return weeklySalary;
}//end function retrieve salary

//calculate earnings
//override pure virtual function earnings in Employee
double SalariedEmployee::earnings()const
{
    return getWeeklySalary();
}//end function earnings

//print SalariedEmployee information
void SalariedEmployee::print()const
{
    cout<<"salaried employee"<<endl;
    Employee::print();//reuse abstract base class print function
    cout<<"\nweekly salary: "<<getWeeklySalary();
}//end function print
