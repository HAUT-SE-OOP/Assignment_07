#include <iostream>
#include <stdexcept>
#include "HourlyEmployee.h"//HourlyEmployee class definition

using namespace std;

HourlyEmployee::HourlyEmployee(const string &first,
    const string &last, const string &ssn, double wage, double hours)
    :Employee( first,last,ssn )
{
    setWage( wage);
    setHours( hours );
}//end HourlyEmployee constructor

void HourlyEmployee::setWage( double wage)
{
    if( wage >= 0.0)
        wageN = wage;
    else
        throw invalid_argument("wage must be >= 0.0");

}//end function setWeeklySalary

double HourlyEmployee::getWage() const
{
    return wageN;
}//end function getWeeklySalary

void HourlyEmployee::setHours( double hours)
{
    if( hours >= 0.0)
        hoursN = hours;
    else
        throw invalid_argument("hours must be >= 0.0");

}//end function setWeeklySalary

double HourlyEmployee::getHours() const
{
    return hoursN;
}//end function getWeeklySalary


double HourlyEmployee::earnings() const
{
    if(getHours()<40)
    {
        return getWage() * getHours();
    }
   else
   {
       return getWage()*1.5 * getHours();
   }
}//end function earnings

void HourlyEmployee::print() const
{
    cout<<"hourly employee : ";
    Employee::print();
    cout<<"\nwage: "<<getWage();
    cout<<"\nhours: "<<getHours();
}//end function print
