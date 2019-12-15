#include <iostream>

#include "CommissionEmployee.h"

using namespace std;

CommissionEmployee::CommissionEmployee(string first ,string last ,string ss,double g,double rate)
   :Employee(first ,last,ss)
{
    setGrossSales(g);
    setCommissionRate(rate);
}
void CommissionEmployee::setGrossSales(double g)
{
    grossSales=g;
}
double CommissionEmployee::getGrossSales()
{
    return grossSales;
}
void CommissionEmployee::setCommissionRate(double rate)
{
    commissionRate=rate;
}
double CommissionEmployee::getCommissionRate()
{
    return commissionRate;
}
double CommissionEmployee::earnings()
{
    return commissionRate*grossSales;
}
void CommissionEmployee::print()
{
    Employee::print();
    cout<<"\nthe grossSalary is : "<<grossSales;
    cout<<"\nthe commissionRate is : "<<commissionRate;
    cout<<"\nthe earnings is : "<<earnings();
}
