//CommissionEmployee .h
//CommissionEmployee class member function definitions
#include <iostream>
#include <stdexcept>
#include "CommissionEmployee.h"
using namespace std;

//constructor
CommissionEmployee::CommissionEmployee( const string &first,const string &last,const string &ssn,double sales,double rate)
    :Employee(first , last, ssn)
{
    setGrossSales( sales );
    setCommissionRate(rate);
}//end CommissionEmployee constructor

//set gross sales amount
void CommissionEmployee::setGrossSales(double sales)
{
    if(sales>=0.0)
        grossSales=sales;
    else
        throw invalid_argument("Gross sales must be >=0.0");
}//ens function setGrossSales

//return gross sales
double CommissionEmployee::getGrossSales()const
{
    return grossSales;
}//end return sales

//set rate
void CommissionEmployee::setCommissionRate(double rate)
{
    if(rate>0.0&&rate<1.0)
        commissionRate=rate;
    else
        throw invalid_argument("Commission Rate must be >0and <1");
}//end

//return rate
double CommissionEmployee::getCommissionRate()const
{
    return commissionRate;
}//end

//calculate earnings
//override pure virtual function earnings in Employee
double CommissionEmployee::earnings()const
{
    return getCommissionRate()*getGrossSales();
}//end

void CommissionEmployee::print()const
{
    cout<<"commission employee ";
    Employee::print();
    cout<<"\ngross sales: "<<getGrossSales()
        <<" ; commission rate : "<<getCommissionRate();
}//end function print
