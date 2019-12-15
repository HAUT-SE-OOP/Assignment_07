#include <iostream>
#include "HourlyWorker.h"
HourlyWorker::HourlyWorker(const string &first,const string &last,const string &ssn,double w,double h)
:Employee(first,last,ssn)
{
    setWage(w);
    setHours(h);
}
void HourlyWorker::setWage(double w)
{
    wage=w;
}
double HourlyWorker::getWage()
{
    return wage;
}
void HourlyWorker::setHours(double h)
{
    hours=h;
}
double HourlyWorker::getHours()
{
    return hours;
}
double HourlyWorker::earnings() const
{
    if(hours>40)
    {
        return 40*wage+(hours-40)*wage*1.5;

    }
    else
        return wage*hours;
}
void HourlyWorker::print() const
{
    cout<<"HourlyWorker:";
    Employee::print();
    cout<<"\nwage:"<<getWage();
    cout<<"\nhours:"<<getHours();
}
