// Assignment_07: SalariedEmployee.cpp
// SalariedEmployee class member-function definitions.
#include <iostream>
#include <stdexcept>
#include "SalariedEmployee.h"
using namespace std;

// constructor
SalariedEmployee::SalariedEmployee( const string & Fname,
    const string & Lname,const string & SSN, double salary )
    : Employee( Fname, Lname, SSN )
{
    setWeeklySalary( salary );
}// end SalariedEmployee constructor

// set Weekly Salary
void SalariedEmployee::setWeeklySalary( double salary )
{
    if( salary >= 0 )
        weeklySalary = salary;
    else
        throw invalid_argument( "Weekly salary must be >=0.0" );
}// end function setWeeklySalary

// return Weekly Salary
double SalariedEmployee::getWeeklySalary() const
{
    return weeklySalary;
}// end function getWeeklySalary

// return earnings
double SalariedEmployee::earnings() const
{
    return getWeeklySalary();
}// end function earnings

// print
void SalariedEmployee::print() const
{
    cout << "Salaried employee: ";
    Employee::print();
    cout << "\nweekly salary: " << getWeeklySalary();
}// end function print
