
#include <iostream>
#include <string >
#include "SalariedEmployee.h"
using namespace std;

SalariedEmployee :: SalariedEmployee(const string &first, const string &last, const string &ssn, const double salary)
:Employee (first, last, ssn)
{
    setWeeklySalary(salary);
}
void SalariedEmployee :: setWeeklySalary (double salary)
{
    if(salary < 0.0)
        throw invalid_argument("weekiy salary must be >=0.0");
    else
        weeklySalary = salary;
}
double SalariedEmployee :: getWeeklySalary() const
{
    return weeklySalary;
}
double SalariedEmployee :: earnings() const
{
    return getWeeklySalary();
}
void SalariedEmployee :: print() const
{
    cout << "salaried employee:";
    Employee :: print();
        cout << "\nweekly salary:" <<getWeeklySalary();
}

