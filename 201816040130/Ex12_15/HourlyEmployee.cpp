#include "Employee.h"
#include "HourlyEmpolyee.h"
#include <string>
#include <iostream>
using namespace std;

HourlyEmployee::HourlyEmployee(const string &first,const string &last,const string &ssn,double w,double h) //definition of class HourlyEmployee
:Employee(first,last,ssn)
{
    if(h > 40)
    {
        hours = hour;
        wage = 1.5 * wage;
    }
}

double HourlyEmployee::earnings() //define function to HourlyEmployee
{
    return wage * hours;
}
