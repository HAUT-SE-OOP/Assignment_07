#include <stdexcept>
#include <iostream>
#include "BasePlusCommissionEmployee.h"

using namespace std;

/*initializing the firstname, lastname, socialSecurityNumber, grossSales, commissionRate, baseSalary*/
BasePlusCommissionEmployee::BasePlusCommissionEmployee(const string &first, const string &last, const string &ssn,
                                                       double sales, double rate, double salary)
    :CommissionEmployee(first, last, ssn, sales, rate)
    {
        setBaseSalary(salary);
    }
/*set and get the baseSalary*/
void BasePlusCommissionEmployee::setBaseSalary(double salary)
{
    if(salary>=0.0)
        baseSalary=salary;
    else
        throw invalid_argument("Salary must be >= 0.0");
}
double BasePlusCommissionEmployee::getBaseSalary() const
{
    return baseSalary;
}
/*Redefine pure virtual functions and virtual functions*/
double BasePlusCommissionEmployee::earnings() const
{
    return getBaseSalary()+CommissionEmployee::earnings();
}
void BasePlusCommissionEmployee::print() const
{
    cout << "base-salaried: ";
    CommissionEmployee::print();/*reuse the print of CommissionEmployee*/
    cout << "; base salary: " << getBaseSalary();
}
