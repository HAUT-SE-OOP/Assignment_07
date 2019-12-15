#include <iostream>
#include <stdexcept>
#include "SalariedEmployee.h"//SalariedEmployee class definition

using namespace std;

SalariedEmployee::SalariedEmployee(const string &first,
    const string &last, const string &ssn, double salary)
    :Employee( first,last,ssn )
{
    setWeeklySalary(salary);
}//end SalariedEmployee constructor

void SalariedEmployee::setWeeklySalary( double salary)
{
    if( salary >= 0.0)
        weeklySalary = salary;
    else
        throw invalid_argument("weekly salary must be >= 0.0");

}//end function setWeeklySalary

double SalariedEmployee::getWeeklySalary() const
{
    return weeklySalary;
}//end function getWeeklySalary

double SalariedEmployee::earnings() const
{
    return getWeeklySalary();
}//end function earnings

void SalariedEmployee::print() const
{
    cout<<"salaried employee : ";
    Employee::print();
    cout<<"\nweekly salary: "<<getWeeklySalary();
}//end function print
