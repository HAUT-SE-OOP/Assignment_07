#include <iostream>
#include <stdexcept>
#include "SalariedEmployee.h"

using namespace std;
SalariedEmployee::SalaryedEmployee( const string &first,
    const string &last,const string &ssn, double salary )
    :Employee( first, last, ssn )
{
    setWeeklySalary( salary );
}

void SalariedEmployee::setWeeklySalary( double salary )
{
    if( salary >= 0.0 )
        weekSalary = salary;
    else
        throw invalid_argument( "weeklysalary must be >= 0.0" );
}

double SalariedEmployee::getWeeklySalary() const
{
    return weeklySalay;
}

double SalariedEmployee::earnings( ) const
{
    return getWeeklySalary();
}

void SalariedEmployee::print() const
{
    cout << "salaried employee: ";
    Employee::peint();
    cout << "\nweekly salary: " << getWeeklySalary();
}
