//HourlyEmployee.cpp
#include<iostream>
#include"HourlyEmployee.h"
#include<stdexcept>
using namespace std;

HourlyEmployee::HourlyEmployee(const string &a, const string &b, const string &c,double d, int e)
                            :Employee(a,b,c)
{
    setHWage(d);
    setHHours(e);
}
void HourlyEmployee::setHWage(double d)
{
    if(d<0)
        HWage=0;
    else
        HWage=d;
}
void HourlyEmployee::setHHours(int e)
{
    if(e<0)
        HHours=0;
    else
       HHours=e;
}

int HourlyEmployee::getHHours() const
{
    return HHours;
}

double HourlyEmployee::getHWage() const
{
    return HWage;
}

double HourlyEmployee::earnings() const
{
    if(getHHours()>40)
        return (getHHours()-40)*getHWage()*1.5+40*getHWage();
    else
        return getHHours()*getHWage();
}

void HourlyEmployee::print() const
{
    cout<<"hourly employee£º";
    Employee::print();
    cout << "the wage of HourlyEmployee is: " << getHWage() << endl;
    cout << "the hours of HourlyEmployee is: " << getHHours() << endl;
    cout<<"the earnings is:"<<earnings()<<endl;
}
