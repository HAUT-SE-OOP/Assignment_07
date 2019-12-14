#include <bits/stdc++.h>
using namespace std;
#include "SalariedEmployee.h"

//constructor function
SalariedEmployee::SalariedEmployee( const string &a, const string &b, const string &c, double d )
    :Employee( a, b, c )
{
    setWeeklySalary( d );
}//end function

//set weekly salary
void SalariedEmployee::setWeeklySalary( double s )
{
    if( s>=0.0 )//judge s>=0
        weeklySalary = s;
    else
        throw invalid_argument( "Weekly salary must be >= 0.0" );
}//end function

//get weekly salary
double SalariedEmployee::getWeeklySalary() const
{
    return weeklySalary;
}//end function

//function to calculate earnings
double SalariedEmployee::earnings()const
{
    return getWeeklySalary();
}//end function

//function to print object
void SalariedEmployee::print()const
{
    cout<<"salaried employee: ";
    Employee::print();
    cout<<"weekly salary: "<<getWeeklySalary()<<endl;
}//end function
