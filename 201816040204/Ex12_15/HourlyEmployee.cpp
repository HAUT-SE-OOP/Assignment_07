#include <iostream>
#include "HourlyEmployee.h"
using namespace std;

HourlyEmployee :: HourlyEmployee(const string &first, const string &last, const string &ssn, double w, double h)
: Employee(first, last, ssn)
{
    setWage(w);
    setHours(h);
}
void HourlyEmployee :: setWage(double w)
{
     if(w < 0.0)
        throw invalid_argument("Wage must be >=0.0");
     else
        wage = w;
}
double HourlyEmployee :: getWage ()const
{
    return wage;
}
void HourlyEmployee :: setHours(double h)
{
    if(h < 0.0)
    throw invalid_argument("Hours must be >=0.0");
    else
        hours = h;
}
double HourlyEmployee :: getHours()const
{
    return hours;
}
double HourlyEmployee ::earnings()const
{
    if(getHours()<=40.0)
        return getWage() * getHours();
    if(getHours()>40.0)
        return getWage() *40.0 + 1.5 *getWage() *(getHours() - 40.0);
}
void HourlyEmployee :: print()const
{
    cout << "hourly employee: ";
    Employee ::print();
    cout << "\nwage: " << getWage()
    << "; hours: " <<getHours();
}
