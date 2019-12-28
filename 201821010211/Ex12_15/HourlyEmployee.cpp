#include <iostream>
#include"HourlyEmployee.h"
#include<string>
using namespace std;

HourlyEmployee::HourlyEmployee(const string &first,const string &last,const string &ssn,double w,double h)
      :Employee(first,last,ssn)
{
    setwage(w);
    sethours(h);
}
void HourlyEmployee::setwage(double w)
{
    if(w>0)
        wage=w;
    else
        throw invalid_argument("wage must be >0");
}
double HourlyEmployee::getwage()const
{
    return wage;
}
void HourlyEmployee::sethours(double h)
{
    if(h>=0)
        hours=h;
    else
        throw invalid_argument("hours must be >=0");
}
double HourlyEmployee::gethours()const
{
    return hours;
}
double HourlyEmployee::earnings()
{
    if(hours>40)
        return 1.5*getwage()*(gethours()-40)+gethours()*getwage();
    else
        return getwage()*gethours();
}
void HourlyEmployee::print()
{
    Employee::print();
    cout<<"hours Employee wage : "<<getwage()<<"hours Employee hours : "<<gethours()<<endl;
}
