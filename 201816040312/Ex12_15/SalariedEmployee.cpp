#include <iostream>
#include <stdexcept>
#include "SalariedEmployee.h"

using namespace std;
//constructor
SalariedEmployee::SalariedEmployee(const string &first,const string &last,const string &ssn,double salary)
:Employee(first,last,ssn)
{
    setweeklysalary(salary);
}
//set salary
void SalariedEmployee::setweeklysalary(double salary)
{
    if(salary>=0.0)
        weeklysalary=salary;
    else
        throw invalid_argument("weekly salary must be >=0.0");
}//end function setweeklysalary

//return salary
double SalariedEmployee::getweeklysalary()const
{
    return weeklysalary;
}//end function getweeklysalary
//calculate earning
double SalariedEmployee::earnings()const
{
    return getweeklysalary();
}//end function earning
//print SalariedEmployee's information
void SalariedEmployee::print()const
{
    cout<<"salaried employee: ";
    Employee::print();
    cout<<"\nweekly salary: "<<getweeklysalary();
}//end function print
