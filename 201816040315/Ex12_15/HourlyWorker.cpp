//Hourly Worker .cpp
//HourlyWorker class member function definitions
#include <iostream>
#include <stdexcept>
#include"HourlyWorker.h"
using namespace std;

//constructor
HourlyWorker::HourlyWorker(const string &first,const string &last,const string &ssn,double wages,double hour)
    :Employee(first,last,ssn)
{
    setWage(wages);
    setHours(hour);
}//end constructor

void HourlyWorker::setWage(double wages)
{
    if(wages>0.0)
        wage = wages;
    else
        throw invalid_argument("wage must be >0");
}//end set wage

//retrieve wage
double HourlyWorker::getWage()const
{
    return wage;
}//end retrieve wage

//set hour
void HourlyWorker::setHours(double hour)
{
    if(hour>0)
        hours=hour;
    else
        throw invalid_argument("hours must be >0.");
}//end

//retrieve hours
double HourlyWorker::getHours()const
{
    return hours;
}//end
//calculate earnings
//override pure virtual function earnings in Employee
double HourlyWorker::earnings()const
{
    double cost;
    if(hours<=40)
        cost= getHours()*getWage();
    else
        cost=getWage()*40+getWage()*1.5*(getHours()-40);
    return cost;
}//end

void HourlyWorker::print()const
{
    cout<<"Hourly Worker salary:"<<endl;
    Employee::print();
    cout<<"work hours:"<<getHours()<<endl<<"wage:"<<getWage()<<endl;
    cout<<"hourly worker salary: "<<earnings();
}//end
