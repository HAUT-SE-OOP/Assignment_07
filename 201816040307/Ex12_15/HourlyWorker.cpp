#include<iostream>
#include"HourlyWorker.h"
using namespace std;

HourlyWorker::HourlyWorker(string first,string last,string ssn,double w,double h)
    :Employee(first,last,ssn),wage(w),hour(h)
{

}


void HourlyWorker::print()
{
    cout<<"HourlyWorker employee:";
    Employee::print();
    cout<<"\nwage:"<<getWage()<<";hours:"<<getHours();
}

void HourlyWorker::setWage(double w)
{
    this->wage = w;
}
double HourlyWorker::getWage()const
{
    return this->wage;
}
void HourlyWorker::setHours(double h)
{
    this->hour = h;
}
double HourlyWorker::getHours()const
{
    return this->hour;
}
double HourlyWorker::earnings()
{
    double s = getHours();
    if(s <= 40)
        return getWage() * getHours();
    else
        return getWage() * 40 + getWage() * 1.5 * (getHours()-40);
}
