#include <iostream>
#include <stdexcept>
#include "CommissionEmployee.h"
using namespace std ;

CommissionEmployee::CommissionEmployee(const string &first,const string &last,const string &ssn, double sales, double rate)
  :Employee(first , last , ssn)
{
      setGrossSales(sales);
      setCommissionRate(rate) ;
}
void CommissionEmployee::setGrossSales(double salary)
{
    if(salary>=0.0)
        grossSales=salary;
    else
        throw invalid_argument("gross sales must be >= 0.0");
}
void CommissionEmployee::setCommissionRate(double salary)
{
    if(salary>=0.0&&salary<1.0)
        commissionRate=salary;
    else
        throw invalid_argument("Comission Rate must be >= 0.0");
}
double CommissionEmployee::getGrossSales()const
{
    return grossSales;
}
double CommissionEmployee::getCommissionRate()const
{
    return commissionRate;
}
double CommissionEmployee::earnings()const
{
    return getGrossSales()*getCommissionRate();
}
void CommissionEmployee::print()const
{
    cout <<"commission employee:";
    Employee::print();
    cout << "\ngross sales:" << getGrossSales()
    <<"; comission rate : "<<getCommissionRate() ;
}
