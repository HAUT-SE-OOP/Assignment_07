#include"HourlyEmployee.h"
#include<iostream>
using namespace std;

HourlyEmployee::HourlyEmployee(const string &first,const string &last,
const string &ssn,double w,double h )
:Employee(first,last,ssn)
{
    setwage(w);
    sethours(h);
}

void HourlyEmployee::setwage(double w)
{
    wage = w;
}
double HourlyEmployee::getwage()
{
    return wage;
}
void HourlyEmployee::sethours(double h)
{
    hours = h;
}
double HourlyEmployee::gethours()
{
    return hours;
}
double HourlyEmployee::earnings()const
{
    if(hours>40)
        return 1.5*wage*hours;
    else
        return wage * hours;
}
void HourlyEmployee::print()const
{
    cout<<"HourlyEmployee:";
    Employee::print();// reuse abstract base-class pr¨ªnt function
    cout<<"\n earnings:"<< earnings();

}


