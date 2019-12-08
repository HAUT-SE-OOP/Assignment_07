//HourlyEmployee.cpp
#include<iostream>
#include"HourlyEmployee.h"
#include<stdexcept>
using namespace std;

HourlyEmployee::HourlyEmployee(const string &first, const string &last, const string &ssn,
                               double wage, int hours)
                            :Employee(first,last,ssn)
{
    setHourlyWage(wage);
    setHourlyHours(hours);
}

void HourlyEmployee::setHourlyHours(int hours)
{
    if(hours>=0)
        hourlyHours=hours;
    else
        throw invalid_argument("hourlyHours must be >= 0");
}

int HourlyEmployee::getHourlyHours() const
{
    return hourlyHours;
}

void HourlyEmployee::setHourlyWage(double wage)
{
    if(wage>=0)
        hourlyWage=wage;
    else
        throw invalid_argument("hourlyWage must be >=0 ");
}

double HourlyEmployee::getHourlyWage() const
{
    return hourlyWage;
}

double HourlyEmployee::earnings() const
{
    if(getHourlyHours()<=40)
        return getHourlyHours()*getHourlyWage();
    else
        return (40*getHourlyWage()+(getHourlyHours()-40)*getHourlyWage()*1.5);
}

void HourlyEmployee::print() const
{
    cout << "HourlyEmployee: ";
    Employee::print();
    cout << "\nHourlyEmployee's wage: " << getHourlyWage() << endl;
    cout << "HourlyEmployee's hours: " << getHourlyHours() << endl;
}
