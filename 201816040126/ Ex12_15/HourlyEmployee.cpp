#include <iostream>
#include "HourlyEmployee.h"
#include "Employee.h"


using namespace std;

HourlyEmployee::HourlyEmployee( const string &first, const string &last,
                         const string &ssn, double wage, double hours )
            :Employee( first, last , ssn )
            {
                setWage( wage );
                setHours( hours );
            }

void HourlyEmployee::setWage( double wage )
{
    if( wage >= 0)
    Wage = wage;
    else
       throw invalid_argument("Wage should be greater than 0!") ;
}
//function tn set wage

double HourlyEmployee::getWage( )
{
    return Wage;
}
//function to get wage

void HourlyEmployee::setHours( double hours )
{
    if( 0 <= hours < 40)
    {
    Hours = hours;
    }
    if( hours >= 40 )
    {
        Hours = 1.5 * hours;
    }
}
//judge the hours ,multiply 1.5 to the hours.
//It's equal to multiply 1.5 to the wage

double HourlyEmployee::getHours( )
{
    return Hours;
}
//function to get hours

void HourlyEmployee::earnings()
{
    cout << "\nThe hourly employee's earnings is: " << endl;
    cout << getWage() * getHours() << endl;
}
//function to show earnings

void HourlyEmployee::print()
{
    cout << getFirstName() << ' ' << getLastName()
    << "\nSocial security number: " << getSocialSecurityNumber();
    HourlyEmployee::earnings();
}
