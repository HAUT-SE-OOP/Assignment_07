#include "Employee.h"
#include "HourlyEmployee.h"
#include <string>
#include <iostream>
using namespace std;

HourlyEmployee::HourlyEmployee(const string &first,const string &last,const string &ssn,double Wage,double hour) //definition of class HourlyEmployee
:Employee(first,last,ssn)
{
    setHour(hour);
    setWage(hour);
}
void setHour(double hour )
{
    if(hour>=40)
        hours=hour;
}


double getHour()
{
    return hours;
}
void setWage(double wage )
{
    if(hour>=40)
        wage=1.5*Wage
}
double getWage()
{
    return wage;
}

double HourlyEmployee::earnings() //define function to HourlyEmployee
{
    return wage * hours;
}
