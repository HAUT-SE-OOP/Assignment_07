#include<iostream>
#include"HourlyWoker.h"
using namespace std;

 HourlyWorker::HourlyWorker(string first,string last,string ssn,double wage,double hours)
 :Employee(first,last,ssn)
 {
     setWage(wage);
     setHour(hours);
 }
 void HourlyWorker::setWage(double wage)
 {
     Wage=wage;
 }
double HourlyWorker::getWage()
{
    return Wage;
}
void HourlyWorker::setHour(double hours)
{
    Hours=hours;
}
double HourlyWorker::getHour()
{
    return Hours;
}
double HourlyWorker::earnings()
{
    if(Hours<=40&&Hours>0)
    {
        return Wage*Hours;
    }
    else
    {
        return 1.5*Wage*(Hours-40)+40*Wage;
    }

}
void HourlyWorker::print()
{
    cout<<"hourly worker:";
    Employee::print();
   cout<<"\nwage:"<<getWage()<<";hours:"<<getHour();

}

