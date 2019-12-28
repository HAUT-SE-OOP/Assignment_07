#include"CommissionEmployee.h"
#include<iostream>
using namespace std;
CommissionEmployee::CommissionEmployee(const string &f,const string &l,const string &s,double sales,double rate)
:Employee(f,l,s)
    {
        setGrossSales(sales);
        setCommissionRate(rate);

    }
void  CommissionEmployee::setCommissionRate(double rate)
{
    if(rate>0.0&&rate<1.0)
        commissionRate=rate;
    else
        throw invalid_argument("rate must be 0.0-1.0");
}
double CommissionEmployee::getCommissionRate()  const
{
    return commissionRate;
}
void   CommissionEmployee::setGrossSales(double sales)
{
    if(sales>=0.0)
        grossSales=sales;
    else
        throw invalid_argument("sale must be >=0.0");
}
double  CommissionEmployee::getGrossSales()  const
{
    return grossSales;
}
double  CommissionEmployee::earnings()  const
{
    return getGrossSales()*getCommissionRate();
}
void  CommissionEmployee::print()  const
{
    cout<<"commission Employee: ";
    Employee::print();
    cout<<"\ngross sales : "<<getGrossSales();
    cout<<";commission rate: "<<getCommissionRate();

}
