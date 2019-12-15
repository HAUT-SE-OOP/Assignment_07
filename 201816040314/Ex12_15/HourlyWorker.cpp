//HourlyWorker.cpp
#include <iostream>
#include "HourlyWorker.h"
using namespace std;
HourlyWorker::HourlyWorker(const string &firstName,const string &lastName,const string &ssn,double wage,double hours)
:Employee(firstName,lastName,ssn)
{
    setWage(wage);
    setHours(hours);
}
void HourlyWorker::setWage(double wage)
{
    if(wage>=0)
        this->wage=wage;
    else
        this->wage=0;
}
double HourlyWorker::getWage()const
{
    return wage;
}
void HourlyWorker::setHours(double hours)
{
    if(hours>=0)
        this->hours=hours;
    else
        this->hours=0;
}
double HourlyWorker::getHours()const
{
    return hours;
}
double HourlyWorker::earnings()const
{
    double num=getHours();
    if(num<40)
        return num*getWage();
    else
        return 40*getWage()+1.5*(num-40)*getWage();
}

