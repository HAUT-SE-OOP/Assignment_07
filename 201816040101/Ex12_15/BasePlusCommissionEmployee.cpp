#include "BasePlusCommissionEmployee.h"
#include <stdexcept>
#include <iostream>
using namespace std;

BasePlusCommissionEmployee::BasePlusCommissionEmployee(string first ,string last ,string ss,double g,double rate ,double base)
     :CommissionEmployee(first, last ,ss ,g ,rate)
{
    setBaseSalary(base);
}
void BasePlusCommissionEmployee::setBaseSalary(double base)
{
    baseSalary=base;
}
double BasePlusCommissionEmployee::getBaseSalary()
{
    return baseSalary;
}
double BasePlusCommissionEmployee::earnings()
{
    return CommissionEmployee::earnings()+baseSalary;
}
void BasePlusCommissionEmployee::print()
{
    Employee::print();
    cout<<"\nthe grossSalary is : "<<getGrossSales();
    cout<<"\nthe commissionRate is : "<<getCommissionRate();
    cout<<"\nthe baseSalary is : "<<baseSalary;
    cout<<"\nthe earnings is : "<<earnings();
}
