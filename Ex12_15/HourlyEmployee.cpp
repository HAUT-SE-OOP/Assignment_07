#include<iostream>
#include"HourlyEmployee.h"
using namespace std;

HourlyWorker::HourlyWorker(const string &first, const string &last, const string &ssn, double w, double h)
    : Employee(first, last, ssn)
    {
        wage = w;
        hours = h;
    }

double HourlyWorker::earnings() const
{
    if(getHour() <= 40)
        return getWage()*getHour();
    else
        return getWage()*40 + 1.5*getWage()*(getHour()-40);
}

void HourlyWorker::print() const
{
    cout << "hour employee: ";
    Employee::print();
    cout << "\nhour salary: " << earnings();
}

double HourlyWorker::getHour() const
{
    return hours;
}

double HourlyWorker::getWage() const
{
    return wage;
}

