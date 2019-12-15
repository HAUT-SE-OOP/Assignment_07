#include <iostream>
#include <stdexcept>
#include "SalariedEmployee.h"

using namespace std;
//子类SalariedEmpoyee constructor
SalariedEmployee::SalariedEmployee( const string &first, const string &last, const string &ssn, double salary)
    : Employee( first, last, ssn )
{
   setWeeklySalary(salary);
}

void SalariedEmployee::setWeeklySalary( double salary)
{//判断
    if(salary >= 0.0)
    {
        weeklySalary=salary;
    }
    else
        throw invalid_argument( "Weekly Salary must be >= 0.0" );

}
double SalariedEmployee::getWeeklySalary() const
{
    return weeklySalary;
}

void SalariedEmployee::print() const
{
    cout << "salaried employee: ";
    Employee::print();//reuse abstrsct base-class print function
    cout << "\nweekly salary: " << getWeeklySalary();
}
double SalariedEmployee::earnings() const
{
    return getWeeklySalary();
}
