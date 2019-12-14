#include <iostream>
#include <stdexcept>
#include "CommissEmployee.h"
using namespace std;

CommissionEmployee::CommissionEmployee(const string &first,
   const string &last, const string &ssn,double sales, double rate )
   :Employee(first,last,ssn)
{
    setGrossSales( sales ); // validate and store gross sales
    setCommissionRate( rate ); // validate and store commission rate
}
void CommissionEmployee::setGrossSales( double sales )
{
   grossSales = ( sales < 0.0 ) ? 0.0 : sales;
} // end function setGrossSales

// return gross sales amount
double CommissionEmployee::getGrossSales() const
{
   return grossSales;
} // end function getGrossSales

// set commission rate
void CommissionEmployee::setCommissionRate( double rate )
{
   commissionRate = ( rate > 0.0 && rate < 1.0 ) ? rate : 0.0;
} // end function setCommissionRate

// return commission rate
double CommissionEmployee::getCommissionRate() const
{
   return commissionRate;
} // end function getCommissionRate

double CommissionEmployee::earnings() const
{
   return getCommissionRate() * getGrossSales();
} // end function earnings

void CommissionEmployee::print() const
{
   cout << "commission employee: ";
   Employee::print();
   cout<<"\ngorss sales: "<<getGrossSales()
       <<"; Commission rate: "<<getCommissionRate();
}//end function
