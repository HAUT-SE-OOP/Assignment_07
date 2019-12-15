#include <iostream>
#include "Employee.h"

#include "SalariedEmployee.h"

using namespace std;

SalariedEmployee::SalariedEmployee( const string &first, const string &last,
                         const string &ssn, double salary )
            :Employee( first, last , ssn )
            {
                setWeeklySalary( salary );
            }

void SalariedEmployee::setWeeklySalary( double salary )
{
    if( salary >= 0)
    WeeklySalary = salary;
    else
       throw invalid_argument("Weekly salary should be greater than 0!") ;
}

double SalariedEmployee::getWeeklySalary()
{
    return WeeklySalary;
}

void SalariedEmployee::earnings()
{
    cout << "\nThe salaried worker's earning is: " << endl;
    cout << getWeeklySalary() << endl;
}
//function to show earnings

void SalariedEmployee::print()
{
    cout << getFirstName() << ' ' << getLastName()
    << "\nSocial security number: " << getSocialSecurityNumber();
    SalariedEmployee::earnings();
}
