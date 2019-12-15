#include <iostream>
#include <stdexcept>
#include "HourlyWorker.h"
using namespace std;
HourlyWorker::HourlyWorker( const string& first, const string &last,const string &ssn,double wa,double hou)
:Employee( first , last , ssn )
{
    setWage( wa );
    setHours(hou);
}
void HourlyWorker::setWage( double wa )
{
    if( wa >= 0.0 )
        wage = wa;
    else
throw invalid_argument( "wage must be >= 0.0 " );
}
double HourlyWorker::getWage() const
{
    return wage;

}
void HourlyWorker::setHours( double hou )
{
    if( hou >= 0.0 )
        hours = hou;
    else
throw invalid_argument( "Hours must be >= 0.0 " );
}
double HourlyWorker::getHours() const
{
    return hours;

}
double HourlyWorker::earnings() const
{
    if(hours<=40)
    return getWage()*getHours();
    else return getWage()*getHours()*1.5;
}
void SalariedEmployee::print() const

{
    cout << "HourlyWorker employee : ";
    Employee::print();
    cout << "\nHourlyWorker wage: " << getWage() ;
    cout << "\nHourlyWorker Hours: " << getHours() ;

}
