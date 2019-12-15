#include<iostream>
#include<stdexcept>
#include"HourlyEmployee.h"
using namespace std;
HourlyEmployee::HourlyEmployee(const string &a,const string &b,const string &c,double d,int e)
   :Employee(a,b,c)
{
    wage=d;
    hours=e;
}

double HourlyEmployee::earnings()const
{
    if(hours>40)//if hours more than 40
        return wage*40+1.5*wage*(hours-40);
    else
        return wage*hours;//return the data
}

void HourlyEmployee::print()const
{
    cout<<"HourlyEmployee employee: ";
    Employee::print();
    cout<<"\nthe wage: "<<wage<<"; the hours: "<<hours;
}
