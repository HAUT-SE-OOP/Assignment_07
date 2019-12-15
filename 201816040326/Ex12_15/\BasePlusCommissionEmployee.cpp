#include <iostream>
#include <stdexcept>

#include <string>
#include "BasePlusCommissionEmployee.h"

using namespace std;
BasePlusCommissionEmployee::BasePlusCommissionEmployee( const string &first, const string &last, const string &ssn,double sales, double rate, double basesalary )
    :CommissionEmployee(first, last, ssn, sales, rate)
{
    setBaseSalary(basesalary);
}

void BasePlusCommissionEmployee::setBaseSalary( double basesalary )
{
    if( basesalary > 0.0 )
    {
        baseSalary=basesalary;
    }
    else
        throw invalid_argument( "Base Salary must be > 0.0" );

}
double BasePlusCommissionEmployee::getBaseSalary() const
{
    return baseSalary;
}

double BasePlusCommissionEmployee::earnings() const
{
    return getBaseSalary()+CommissionEmployee::earnings();
}

void BasePlusCommissionEmployee::print() const
{
    cout << "base-salaried: ";
    CommissionEmployee::print();
    cout<<";\nbase salary: " << getBaseSalary();
}
