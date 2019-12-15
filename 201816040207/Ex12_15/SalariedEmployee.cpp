#include <iostream>
#include <stdexcept>
#include"SalariedEmployee.h"//SalariedEmployee class definition
using namespace std;
// constructor
SalariedEmployee::SalariedEmployee( const string &first,
const string &last,const string &ssn,double salary)
    :Employee( first,last,ssn)
{
    setWeeklySalary(salary);
}// end SalariedEmployee constructor
// set salary
void SalariedEmployee::setWeeklySalary( double salary)
{   if(salary>=0.0)
        weeklySalary = salary;
    else
        throw invalid_argument("Weekly salary must be>=0.0");
}// end function setweeklySalary
// return salary
double SalariedEmployee::getweeklySalary()const
{
    return weeklySalary;
}// end function getweeklySalary
//calculate earnings;
// override pure virtual function earnings in Employee
double SalariedEmployee::earnings()const
{
    return getweeklySalary();
}// end function earnings
// print SalariedEmployee's information
void SalariedEmployee::print()const
{
    cout<<"salaried employee:";
    Employee::print();// reuse abstract base-class pr¨ªnt function
    cout<<"\n weekly salary:"<< getweeklySalary();
}// end function print
