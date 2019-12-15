#include<iostream>
#include<stdexcept>
#include"CommissionEmployee.h"
using namespace std;

CommissionEmployee::CommissionEmployee(string first,string last,string ssn,double sales,double rate)
:Employee(first,last,ssn)
{
    setGrossSales(sales);
    setCommissionRate(rate);
}
void CommissionEmployee::setGrossSales(double sales)
{
    if(sales>=0.0)
        grossSales=sales;
    else
        throw invalid_argument("Gross sales must be >=0.0");
}
double CommissionEmployee::getGrossSales()
{
    return grossSales;
}
void CommissionEmployee::setCommissionRate(double rate)
{
    if(rate>0.0&&rate<1.0)
        commissionRate=rate;
    else
        throw invalid_argument("Commission rate must be >0.0 and <1.0");
}
double CommissionEmployee::getCommissionRate()
{
    return commissionRate;
}
double CommissionEmployee::earnings()
{
     return getCommissionRate()*getGrossSales();
}
void CommissionEmployee::print()
{
    cout<<"Commission employee:";
    Employee::print();
    cout<<"\ngross sales:"<<getGrossSales()<<";commission rate:"<<getCommissionRate();
}
