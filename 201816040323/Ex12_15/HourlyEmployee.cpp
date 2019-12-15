#include <iostream>
#include <stdexcept>
#include "HourlyEmployee.h"// HourlyEmployee class definition
using namespace std;
// constructor
HourlyEmployee::HourlyEmployee(const string &first,const string &last,const string &ssn, double wag,double hou)
  :Employee(first , last , ssn)
{
      setWage(wag);// validate wage
      setHours(hou);// validate hour
} // end HourlyEmployee constructor

void HourlyEmployee::setWage(double wag)
{
    wage=wag;
}
double HourlyEmployee::getWage()const
{
    return wage;
}
void HourlyEmployee::setHours(double hou)
{
    hours=hou;
}
double HourlyEmployee::getHours()const
{
    return hours;
}
// calculate earnings
double HourlyEmployee::earnings()const
{
    if(hours<=40)
        return wage*hours;
    else
        return wage*40+1.5*wage*(hours-40);
}// end function earnings
// print HourlyEmployee object
void HourlyEmployee::print()const
{
    cout <<"salaried employee:";
    Employee::print();
    cout <<"\nwage is:" << getWage();
    cout <<"\nhours is:" << getHours();
}// end function print
