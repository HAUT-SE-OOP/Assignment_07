#include "HourlyWorker.h"
#include <stdexcept>
#include <iostream>
using namespace std;

HourlyWorker::HourlyWorker(string first ,string last, string ss,double w,double h)
      :Employee(first ,last ,ss)
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
double HourlyWorker::earnings()
{
    if(hours<=40)
    return wage*hours;
    else
        return wage*40+wage*1.5*(hours-40);
}
void HourlyWorker::print()
{
    Employee::print();
    cout<<"\nthe wage is : "<<wage;
    cout<<"\nthe hours is : "<<hours;
    cout<<"\nthe earnings is : "<<earnings();
}
