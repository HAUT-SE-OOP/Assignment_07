//HourlyWorker.cpp
#include <iostream>
#include <stdexcept>
#include "HourlyWorker.h"
using namespace std;

//constructor
HourlyWorker::HourlyWorker(
   const string &first, const string &last, const string &ssn,
   double wages, int hour)
:Employee( first, last, ssn )
{
    setWage(wages);
    setHours(hour);
}//end HourlyWorker constructor

//set wage
void HourlyWorker::setWage( double wages )
{
    if( wages >= 0.0)
        wage = wages;
    else
        throw invalid_argument("Wage must be >= 0.0");
}//end function setWage

//return wage
double HourlyWorker::getWage() const
{
    return wage;
}//end function getWage

//set pieces
void HourlyWorker::setHours( int hour )
{
   if( hour >= 0)
        hours = hour;
    else
        throw invalid_argument("Hours must be >= 0");
}//end function setHours

//return hours
int HourlyWorker::getHours() const
{
    return hours;
}//end function getHours

double HourlyWorker::earnings() const
{
    if( getHours()<=40 )
    {
        return getWage() * getHours();
    }else
    {
        return 1.5 * getWage() * getHours();
    }

}//end function earnings

void HourlyWorker::print() const
{
    cout << "hourly worker: ";
    Employee::print(); //code reuse
    cout << "\nWage: " << getWage() << "; Hours: " << getHours();
}//end function print
