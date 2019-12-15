#include<iostream>
#include"Employee.h"
#include<string.h>
using namespace std;
#include"CommissionEmployee.h"
#include<stdexcept>
CommissionEmployee::CommissionEmployee(string f,string l,string s,double g,double r)
                                    :Employee(f,l,s)
{
    setGrossSales(g);
    setCommissionRate(r);
}
void CommissionEmployee::setGrossSales(double g)
{
    if(g>=0.0)
        grossSales=g;
    else
        throw invalid_argument("Gross sales must be>+0.0");
}
double CommissionEmployee::getGrossSales()
{
    return grossSales;
}
void CommissionEmployee::setCommissionRate(double r)
{
    if(r>0.0&&r<1.0)
        commissionRate=r;
    else
        throw invalid_argument("Commission rate must be > 0.0 and <1.0");
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
    cout<<"commission employee:";
    Employee::print();
    cout<<"\ngross sales:"<<getGrossSales()
        <<";commission rate:"<<getCommissionRate();
}
