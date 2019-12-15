#include <iostream>
#include <stdexcept>
#include "HourlyWorker.h"
using namespace std;

HourlyWorker::HourlyWorker(string first,string last,string ssn,double salary,double t)
 :Employee(first,last,ssn)
{
    setSalary(salary);
    setTime(t);
}

void HourlyWorker::setSalary(double salary)
{
   wage=salary;
}

double  HourlyWorker::getSalary() const
{
    return wage;
}

void HourlyWorker::setTime(double t)
{
   hours=t;
}

double HourlyWorker::getTime() const
{
    return  hours;
}

double HourlyWorker::earnings()
{
    double a;
    a=getTime()-40;
    if(a>=0)
      return getSalary()*40+getSalary()*1.5*a;
    else
        return getSalary()*getTime();
}

void  HourlyWorker::print()
{
    cout<<"HourlyWork employee: ";
    Employee::print();
    cout<<"\none sales: "<<getSalary()
    <<";hours: "<<getTime()<<"\ntotal sales: "<<earnings();
}
