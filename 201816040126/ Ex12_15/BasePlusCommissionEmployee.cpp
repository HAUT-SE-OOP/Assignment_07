#include <iostream>
#include "Employee.h"
#include "CommissionEmployee.h"
#include "BasePlusCommissionEmployee.h"

using namespace std;

BasePlusCommissionEmployee::BasePlusCommissionEmployee( const string &first, const string &last,
                   const string &ssn , double sales, double rate, double salary)
                   :CommissionEmployee( first, last, ssn, sales, rate )
                   {
                       setSalary( salary );
                   }

void BasePlusCommissionEmployee::setSalary( double salary )//function to set salary
{
    if( salary >= 0)
        Salary = salary;
    else
       throw invalid_argument("Salary should be greater than 0!") ;
}

double BasePlusCommissionEmployee::getSalary()
{
    return Salary;
}
//function to get salary

void BasePlusCommissionEmployee::print()
{
    cout << getFirstName() << ' ' << getLastName()
    << "\nSocial security number: " << getSocialSecurityNumber();
    BasePlusCommissionEmployee::earnings();
}

void BasePlusCommissionEmployee::earnings()
{
    cout << "\nThe base plus commission worker's earning is: " << endl;
    cout << getSalary() + CommissionEmployee::getTotal() << endl;
}
//function to show earnings
