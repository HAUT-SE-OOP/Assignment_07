//HourlyWorker.cpp
//Abstract-base-class HourlyWorker member-function definitions
//Note: No definitions are given for pure virtual functions
#include <iostream>
#include <string>
#include "HourlyWorker.h"
using namespace std;
//constructor
HourlyWorker::HourlyWorker(const string &first,const string &last,const string &ssn,double Wage,double Hours)
    :Employee(first,last,ssn)
{
    setWage(Wage);
    setHours(Hours);
}
//set wage
void HourlyWorker::setWage(double Wage)
{
    if(Wage>0.0)
        wage=Wage;
    else
        wage=0;
}
//return wage
double HourlyWorker::getWage()const
{
    return wage;
}
//set hours
void HourlyWorker::setHours(double Hours)
{
    if(Hours>0.0)
        hours=Hours;
    else
        hours=0;
}
//return hours
double HourlyWorker::getHours()const
{
    return hours;
}
//override virtual function earnings in Employee
double HourlyWorker::earnings()
{
    if(hours<=40)
        return wage*hours;
    else
        return wage*hours*1.5;
}
//print HourlyWorker's information
void HourlyWorker::print()
{
    cout<<"hours workers: ";
    Employee::print();
    cout<<"\nHours: "<<getHours()<<"\nWage: "<<getWage();
}
