#include <iostream>
#include <stdexcept>
#include "HourlyEmployee.h"// HourlyEmployee class definition
using namespace std;

// constructor
HourlyEmployee::HourlyEmployee(const string first,const string last,const string ssn, double wage,double hour)
  :Employee(first , last , ssn)
{
      setWage(wage);// validate wage
      setHours(hour);//validate piece
} // end HourlyEmployee constructor

void HourlyEmployee::setWage(double wage)
{
    Wage=wage;
}

double HourlyEmployee::getWage()
{
    return Wage;
}

void HourlyEmployee::setHours(double hour)
{
    Hours=hour;
}

double HourlyEmployee::getHours()
{
    return Hours;
}

double HourlyEmployee::earnings()const
{
    if(Hours>=0||Hours<=40)
       return Wage*Hours;
    else
       return Wage*40+1.5*Wage*(Hours-40);
}

void HourlyEmployee::print()const
{
    cout<<"HourlyEmployee:";
    Employee::print();
    cout<<"\nHourlyEmployee's salary:"<<earnings();
}
