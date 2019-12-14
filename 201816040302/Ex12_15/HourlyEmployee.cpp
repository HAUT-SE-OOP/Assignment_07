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
        Hours=hours;
    else
        throw invalid_argument("hourlyHours must be >= 0");
}

int HourlyEmployee::getHourlyHours() const
{
    return Hours;
}

void HourlyEmployee::setHourlyWage(double wage)
{
    if(wage>=0)
        Wage=wage;
    else
        throw invalid_argument("hourlyWage must be >=0 ");
}

double HourlyEmployee::getHourlyWage() const
{
    return Wage;
}

double HourlyEmployee::earnings() const
{
    if(getHourlyHours()<=40)
        return getHourlyHours()*getHourlyWage();
    else
        return 1.5*getHourlyWage()*getHourlyHours();
}
void HourlyEmployee::print() const
{
    cout << "hourly worker: ";
    Employee::print(); //code reuse
    cout << "\nWage: " << getHourlyWage() << "; Hours: " << getHourlyHours();
}//end function print
