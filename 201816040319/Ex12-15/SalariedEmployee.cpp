#include <iostream>
#include <stdexcept>
#include "SalariedEmployee.h"
using namespace std;

SalariedEmployee::SalariedEmployee(const string &first,const string &last,const string &ssn,double salary) //definition of class SalariedEmployee
:Employee(first,last,ssn)
{
    setWeeklySalary(salary);
}

void SalariedEmployee::setWeeklySalary(double salary) //define function to setWeeklySalary
{
    if(salary >= 0.0)
        weeklySalary = salary;
    else
        throw invalid_argument("Weekly salary must be >= 0.0");
}

double SalariedEmployee::getWeeklySalary()const //define function to getWeeklySalary
{
    return weeklySalary;
}

double SalariedEmployee::earnings()const //define function to earnings
{
    return getWeeklySalary();
}

void SalariedEmployee::print()const //define function to print
{
    cout << "salaried employee: ";
    Employee::print();
    cout << "\nweekly salary: " << getWeeklySalary();
}
