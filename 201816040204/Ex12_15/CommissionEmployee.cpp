#include <iostream>
#include <stdexcept>
#include "CommissionEmployee.h"
using namespace std;
CommissionEmployee ::CommissionEmployee(const string &first, const string &last, const string &ssn,
                                         double rate, double sales)
:Employee (first, last, ssn)
{
    setCommissionRate(rate);
    setGrossSales(sales);
}
void CommissionEmployee :: setCommissionRate(double rate)
{
    if(rate >0.0 &&rate <1.0)
        commissionRate = rate;
    else
        throw invalid_argument ("Commission rate must be >0.0 and <1.0");
}
double CommissionEmployee ::getCommissionRate()const
{
    return commissionRate;
}
void CommissionEmployee :: setGrossSales(double sales)
{
    if(sales < 0.0)
        throw invalid_argument("Gross sales must be >=0.0");
    else
        grossSales = sales;
}
double CommissionEmployee ::getGrossSales()const
{
    return grossSales;
}
double CommissionEmployee :: earnings()const
{
    return getCommissionRate() * getGrossSales();
}
void CommissionEmployee :: print()const
{
    cout << "commission employee: ";
    Employee :: print();
    cout << "\ngross sales: " << getGrossSales()
    << "; commission rate: " << getCommissionRate();
}



