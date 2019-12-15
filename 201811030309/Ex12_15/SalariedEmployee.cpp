#include "SalariedEmployee.h"
#include <stdexcept>
#include <iostream>

using namespace std;
/* initializing the firstname, lastname, socialSecurityNumber, weeklySalary*/
SalariedEmployee::SalariedEmployee(const string &first, const string &last, const string &ssn, double salary)
    :Employee(first, last, ssn)
    {
        setWeeklySalary(salary);
    }
/* set and get the weeklySalary*/
void SalariedEmployee::setWeeklySalary(double salary)
{
    if(salary>=0.0)
        weeklySalary=salary;
    else
        throw invalid_argument("Weekly salary must be >= 0.0");
}
double SalariedEmployee::getWeeklySalary() const
{
    return weeklySalary;
}
/*Redefine pure virtual functions and virtual functions*/
double SalariedEmployee::earnings() const
{
    return getWeeklySalary();
}
void SalariedEmployee::print() const
{
    cout << "salaried employee: ";
    Employee::print();/* reuse the print of Employee*/
    cout << "\nweekly salary: " << getWeeklySalary();
}
