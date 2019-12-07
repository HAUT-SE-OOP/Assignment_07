#include <iostream>
#include "SalariedEmployee.h"
#include <stdexcept>
using namespace std;



SalariedEmployee::SalariedEmployee(const string &first, const string &last, const string &ssn,double salary)//constructor
:Employee(first,last,ssn)
{
    setWeeklySalary(salary);
}
void SalariedEmployee::setWeeklySalary(double salary)
{
    if(salary>=0.0)
    {
        weeklySalary=salary;
    }
    else
    {
        throw invalid_argument("Weekly salary must be >= 0.0");
    }
}
double SalariedEmployee::getWeeklySalary()const
{
    return weeklySalary;
}
double SalariedEmployee::earnings()const// calculate wage
{
    return getWeeklySalary();
}
void SalariedEmployee::print()const//print worker information
{
    cout<<"Salaried employee: ";
    Employee::print();
    cout<<"\nweekly salary: "<<getWeeklySalary();
}
