#include<iostream>
#include<stdexcept>
#include"SalariedEmployee.h"
using namespace std;

SalariedEmployee::SalariedEmployee(const string &first, const string &last, const &ssn, double salary):Employee(first, last, ssn)
{
    setWeeklySalary(salary);

}

void SalariedEmployee::setWeeklySalary(double salary)
{
    if(salary >= 0)
        weeklySalary = salary;
    else
        throw invalid_argument("weekly salary must be >= 0.0");

}

double SalariedEmployee::getWeeklySalary()const
{
    return weeklysalary;
}

double SalariedEmployee::earnings()const
{
    return getweeklySalary;
}

void SalariedEmployee::print()const
{
    cout<<"salaried employee";
    employee::print();
    cout<<"\nweekly salary:"<<getweeklySalary();
}
