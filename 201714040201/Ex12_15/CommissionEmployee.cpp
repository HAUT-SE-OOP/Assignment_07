//CommissionEmployee.cpp
//CommissionEmployee class member-function definitions
#include<iostream>
#include<stdexcept>
#include "CommissionEmployee.h"//CommissionEmployee class definition

using namespace std;

//constructor
CommissionEmployee::CommissionEmployee(const string &first,const string &last,const string &ssn,double sales,double rate)
    :Employee(first,last,ssn)
{
    setGrossSales(sales);
    setCommissionRate(rate);
}//end CommissionEmployee constructor
//set sales
void CommissionEmployee::setGrossSales(double sales)
{
    if(sales>0)
        grossSales=sales;
    else
        grossSales=0;
}//end function setGrossSales
//return sales
double CommissionEmployee::getGrossSales()const
{
    return grossSales;
}//end function getGrossSales
//set rate
void CommissionEmployee::setCommissionRate(double rate)
{
    if(rate>0)
        commissionRate=rate;
    else
        commissionRate=0;
}//end function setCommissionRate
//return rate
double CommissionEmployee::getCommissionRate()const
{
    return commissionRate;
}//end function getCommissionRate
//calculate earnings
//override pure virtual function earnings in Employee
double CommissionEmployee::earnings()
{
    return getGrossSales()*getCommissionRate();
}//end function earnings
//print CommissionEmployee's information
void CommissionEmployee::print()
{
    cout<<"commission employee: ";
    Employee::print();//reuse abstract base-class print function
    cout<<"\ngross sales: "<<getGrossSales()
    <<"; commission rate: "<<getCommissionRate();
}//end function print
