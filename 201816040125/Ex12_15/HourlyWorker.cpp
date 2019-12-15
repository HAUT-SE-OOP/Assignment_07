#include<iostream>
#include<stdexcept>
#include "HourlyWorker.h"

using namespace std;

HourlyWorker::HourlyWorker(const string &first,const string &last,const string &ssn,double x,double y)
:Employee(first,last,ssn)
{
    setWage(x);
    setHours(y);
}

void HourlyWorker::setWage(double x)
{
    if(x>=0.0)
        wage=x;
    else
        throw invalid_argument("wage must be >=0.0");
}

double HourlyWorker::getWage()const
{
    return wage;
}

void HourlyWorker::setHours(double y)
{
    if(y>=0.0)
        hours=y;
    else
        throw invalid_argument("hour must be >= 0.0");
}

double HourlyWorker::getHours()const
{
    return hours;
}


double HourlyWorker::earnings()
{
    if(getHours()<=40)
        return getWage()*getHours();
    else
        return 40*getWage()+(getHours()-40)*getWage()*1.5;
}


void HourlyWorker::print()
{
    cout<<"Hourly worker: ";
    Employee::print();
    cout<<"\n wage: "<<getWage();
}
