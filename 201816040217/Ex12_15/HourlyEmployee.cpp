#include<bits/stdc++.h>
#include"HourlyEmployee.h"
using namespace std;


HourlyEmployee::HourlyEmployee(const string &first,
        const string &last, const string &ssn,double w,double h)

        :Employee(first,last,ssn)
{
setWage(w);
setHour(h);
}

void HourlyEmployee::setWage(double w)
{
    if(w>0)
    wage = w;
}

double HourlyEmployee::getWage()const
{
    return wage;
}

void HourlyEmployee::setHour(double h)
{
    if(h>0)
    hour = h;
}

double HourlyEmployee::getHour()const
{
    return hour;
}


double HourlyEmployee::earnings() const
{
    if(hour<=40)
        return hour*wage;
    else
        return (hour-40)*wage*1.5+(40*wage);
}

void HourlyEmployee::print()const
{
    cout<<"Hourly Employee ";
    Employee::print();
    cout<<"\nearning $: "<<earnings();

}
