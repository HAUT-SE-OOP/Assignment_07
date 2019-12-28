#include <iostream>
#include "Employee.h"
#include "HourlyEmployee.h"
#include <string>
using namespace std;

HourlyEmployee::HourlyEmployee(string first, string last,string ssn, double w, double h):Employee(first,last,ssn)
{
 setWage(w);
 setHours(h);
}
void HourlyEmployee::setWage(double w)
{
    wage=w;
}

void HourlyEmployee::setHours(double h)
{
    hours=h;
}

double HourlyEmployee:: getWage()const
{
    return wage;
}

double HourlyEmployee::getHours() const
{
    return hours;
}

double HourlyEmployee::earnings() const
{
    if(getHours()>40)
    return getWage()*getHours()+1.5*(40-getHours());
    else
    return getWage()*getHours();
}
