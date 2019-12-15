#include <iostream>
#include <stdexcept>
#include "HourlyWorker.h"
using namespace std;

HourlyWorker::HourlyWorker(const string &first, const string &last, const string &ssn, double Wage, double Hours)
    : Employee(first, last, ssn)
{
    setWage(Wage);
    setHours(Hours);
}
void HourlyWorker::setWage(double Wage)
{
    if(Wage>=0.0)
        wage=Wage;
    else
        throw invalid_argument("Wage must be >= 0.0");
}
double HourlyWorker::getWage() const
{
    return wage;
}
void HourlyWorker::setHours(double Hours)
{
    if(Hours>=0.0)
        hours=Hours;
    else
        throw invalid_argument("Hours must be >= 0");
}
double HourlyWorker::getHours() const
{
    return hours;
}
double HourlyWorker::earnings() const
{
    if(getHours()<=40.0)
        return getWage()*getHours();
    else
        return getWage()*40+getWage()*(getHours()-40.0)*1.5;
}
void HourlyWorker::print() const
{
    cout<<"piece worker:";
    Employee::print();
    cout<<"\nwage: "<<getWage()<<endl;
    cout<<"hours: "<<getHours()<<endl;
    cout<<"salary: "<<earnings()<<endl;
}