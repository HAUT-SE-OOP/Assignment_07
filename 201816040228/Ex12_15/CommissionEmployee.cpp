#include <iostream>
#include <stdexcept>

#include "CommissionEmployee.h"
#include <string>
using namespace std;

//CommissionEmployee constructor
CommissionEmployee::CommissionEmployee( const string &first, const string &last, const string &ssn,double sales, double rate)
    : Employee( first, last, ssn )
{
   setCommissionRate(rate);
   setGrossSales(sales);
}

void CommissionEmployee::setCommissionRate( double rate )
{
    if( rate > 0.0 && rate < 1.0 )
    {//判断
        commissionRate=rate;
    }
    else
        throw invalid_argument( "Commission Rate must be > 0.0 and < 1.0" );

}
double CommissionEmployee::getCommissionRate() const
{
    return commissionRate;
}

void CommissionEmployee::setGrossSales( double sales )
{
    if( sales >= 0 )
    {//判断
        grossSales=sales;
    }
    else
        throw invalid_argument( "Gross Sales must be >= 0.0" );

}
double CommissionEmployee::getGrossSales() const
{
    return grossSales;
}
//calculate earnings
double CommissionEmployee::earnings() const
{
    return getGrossSales()*getCommissionRate();
}
void CommissionEmployee::print() const
{
    cout << "commission employee: ";
    Employee::print();//reuse abstrsct base-class print function
    cout<<"\ngross sales: " << getGrossSales()
    <<";\ncommission rate: " << getCommissionRate();
}



