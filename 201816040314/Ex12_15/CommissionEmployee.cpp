//CommissionEmployee.cpp
#include <iostream>
#include <stdexcept>
#include "CommissionEmployee.h"
using namespace std;
CommissionEmployee::CommissionEmployee(const string & firstNameParameter,const string &lastNameParameter,
                                        const string &ssn,double sales,double rate)//initialize the data member by constructor
:Employee(firstNameParameter,lastNameParameter,ssn)
{
    setGrossSales(sales);
    setCommissionRate(rate);
}
void CommissionEmployee::setGrossSales(double sales)//to set the grossSales
{
    if(sales>=0.0)
        grossSales=sales;
    else
        throw invalid_argument("Gross sales must be >=0.0");
}
double CommissionEmployee::getGrossSales()const//to get the grossSales
{
    return grossSales;
}
void CommissionEmployee::setCommissionRate(double rate)//to set the commissionRate
{
    if(rate>0.0&&rate<1.0)
        commissionRate=rate;
    else
        throw invalid_argument("Commission rate must be >0.0 and <1.0");
}
double CommissionEmployee::getCommissionRate()const//to get the commissionRate
{
    return commissionRate;
}
double CommissionEmployee::earnings()const//to calculate the earning
{
    return getCommissionRate()*getGrossSales();
}
void CommissionEmployee::print()const//print the information
{
    cout<<"commission employee";
    Employee::print();
    cout<<"\ngross sales:"<<getGrossSales()<<";commission rate:"<<getCommissionRate();
}
