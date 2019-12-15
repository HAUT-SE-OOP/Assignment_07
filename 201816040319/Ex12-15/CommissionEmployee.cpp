#include <iostream>
#include <stdexcept>
#include "CommissionEmployee.h"
using namespace std;

CommissionEmployee::CommissionEmployee(const string &first,const string &last,const string &ssn,double sales,double rate)
:Employee(first,last,ssn) //definition constructor of CommissionEmployee
{
    setGrossSales(sales);
    setCommissionRate(rate);
}

void CommissionEmployee::setGrossSales(double sales) //define function to setGrossSales
{
    if(sales >= 0.0)
        grossSales = sales;
    else
        throw invalid_argument("Gross sales must be >= 0.0");
}

double CommissionEmployee::getGrossSales()const //define function to getGrossSales
{
    return grossSales;
}

void CommissionEmployee::setCommissionRate(double rate) //define function to setCommissionRate
{
    if(rate > 0.0 && rate < 1.0)
        commissionRate = rate;
    else
        throw invalid_argument("Commission rate must be > 0.0 and < 1.0");
}

double CommissionEmployee::getCommissionRate()const //define function to getCommissionRate
{
    return commissionRate;
}

double CommissionEmployee::earnings()const //define function to earnings
{
    return getCommissionRate() * getGrossSales();
}

void CommissionEmployee::print()const //define function to print
{
    cout << "commission employee: ";
    Employee::print();
    cout << "\ngross sales: " << getGrossSales() << "; commission rate: " << getCommissionRate();
}



