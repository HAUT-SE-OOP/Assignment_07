#include <iostream>
#include <stdexcept>
#include "HourlyWorker.h" //HourlyWorker class definition
using namespace std;

//constructor
HourlyWorker::HourlyWorker( const string &first, const string &last, const string &ssn, double Wage, double Hours )
    :Employee( first, last, ssn )
{
    setWage( Wage ); // validate and store wage
    setHours( Hours ); // validate and store hours
} // end HourlyWorker constructor

//set wage
void HourlyWorker::setWage( double Wage)
{
    if ( Wage >= 0.0 )
        wage = Wage;
    else
        throw invalid_argument( "Wage must be >= 0.0" );
} // end function setWage

//return wage
double HourlyWorker::getWage() const
{
    return wage;
} // end function getWage

//set hours
void HourlyWorker::setHours( double Hours)
{
    if ( Hours >= 0.0 )
        hours = Hours;
    else
        throw invalid_argument( "Hours must be >= 0.0" );
} // end function setHours

//return hours
double HourlyWorker::getHours() const
{
    return hours;
} // end function getHours

//calculate earnings
double HourlyWorker::earnings() const
{
    if( hours <= 40)
        return getWage() * getHours() ;
    else
        return getWage() * 40 + getWage() * 1.5 * (getHours() - 40);
} // end function earnings

// print HourlyWorker's information
void HourlyWorker::print() const
{
    cout << "hour worker: ";
    Employee::print(); //reuse abstract base-class print function
    cout << "\nwage: " << getWage();
    cout << "; hours: " << getHours();
} // end function print
