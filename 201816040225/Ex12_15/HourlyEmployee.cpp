#include<stdexcept>
#include <iostream>
using namespace std;

#include "HourlyEmployee.h" //  class definition

// constructor
HourlyEmployee::HourlyEmployee(
   const string &first, const string &last, const string &ssn,
   double h, double w )
   :Employee(first,last,ssn)
{
   setWage(w);
   setHour( h);
} // end  constructor

void HourlyEmployee::setWage(double w)//set wage
{
    if (w<=0.0)
    wage=0.0;
    else
        wage=w;
}
double HourlyEmployee::getWage()const//get wage
{
    return wage;
}
void HourlyEmployee::setHour(double h)//set hour
{
    hour= (h < 0.0 ) ? 0.0 : h;
}
double HourlyEmployee::getHour()const//get hour
{
    return hour;
}
double HourlyEmployee::earnings()const //earning function
{
    if(hour<=40.0)
    return getWage()*getHour();
    else
        return getWage()*1.5*(hour-40.0)+getWage()*40.0;
}

// print  object
void HourlyEmployee::print() const
{
   cout << "hourly employee:";
        Employee::print();
      cout<< "\nhour: " << getHour();
      cout<<"\npiece: "<<getWage();
} // end function print


