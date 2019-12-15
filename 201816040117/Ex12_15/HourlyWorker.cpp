#include "HourlyWorker.h"
#include<iostream>
HourlyWorker::HourlyWorker(string f,string l,string s,double w,double h)
:Employee(f,l,s)
{
setWage(w);
setHours(h);
}
void HourlyWorker::setWage(double w)
{
    wage=(w>0)?w:0;
}
double HourlyWorker::getWage()
{
    return wage;
}
void HourlyWorker::setHours(double h)
{
    hours=(h>0)?h:0;
}
double HourlyWorker::getHours()
{
    return hours;
}
double HourlyWorker::earnings()
{
    if(hours<=40)
        return wage*hours;
    return wage*40+(hours-40)*wage*1.5;
}
void HourlyWorker::print()
{
    cout<<"hourly worker:";
    Employee::print();
    cout<<"\nwage:"<<getWage()
    <<"\nhours:"<<getHours();
}
