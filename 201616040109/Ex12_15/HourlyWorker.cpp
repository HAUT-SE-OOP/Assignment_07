// Exercise 12.15 Solution:HourlyWorker.cpp
//HourlyWorker class member-function definitions.
#include<iostream>
#include<stdexcept>
#include"HourlyWorker.h"
using namespace std;

//constructor
HourlyWorker::HourlyWorker(const string &first,const string &last,const string &ssn,double w,double h)
    :Employee(first,last,ssn)
{
    setWage( w );
    setHours( h );
}

//set wage
void HourlyWorker::setWage( double w)
{
    if(w >= 0.0)
        wage=w;
    else
        throw invalid_argument("wage must be >= 0.0");
}

//return wage
double HourlyWorker::getWage() const
{
    return wage;
}

//set hours
void HourlyWorker::setHours( double h)
{
    if(h >= 0.0)
        hours=h;
    else
        throw invalid_argument("hours must be >= 0.0");
}

//return hours
double HourlyWorker::getHours()const
{
    return hours;
}

//calculate earnings
//override pure virtual function earnings in Employee
double HourlyWorker::earnings() const
{
    if(getHours()>40)
    {
        return (40*getWage()+(getHours()-40)*1.5*getWage());
    }
    else
        return getWage()*getHours();
}

//print HourlyWorker's information
void HourlyWorker::print()const
{
    cout << "Hourly Worker: "<<endl;
    Employee::print();
    cout << ";wage: "<<getWage();
    cout <<";hours: "<<getHours();
}
