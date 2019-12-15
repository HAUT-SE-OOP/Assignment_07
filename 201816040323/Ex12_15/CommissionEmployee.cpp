#include <iostream>
#include <stdexcept>
#include "CommissionEmployee.h"
using namespace std ;

CommissionEmployee::CommissionEmployee(const string &first,const string &last,const string &ssn, double sales, double rate)
  :Employee(first , last , ssn)
{
      setGrossSales(sales); // validate and store gross sales
      setCommissionRate(rate) ;// validate and store commission rate
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
// calculate earnings
double CommissionEmployee::earnings()const
{
    return getGrossSales()*getCommissionRate();
} // end function earnings
// print CommissionEmployee object
void CommissionEmployee::print()const
{
    cout <<"commission employee:";
    Employee::print();
    cout << "\ngross sales:" << getGrossSales()
    <<"; comission rate : "<<getCommissionRate() ;
}// end function print

