#include<iostream>

#include<stdexcept>

#include"HourlyWorker.h"

using namespace std;

HourlyWorker::HourlyWorker(const string &first, const string &last, const string &ssn, double wage, double hour)
    : Employee(first, last, ssn)
    {
        setwages(wage);
        sethours(hour);
    }



void HourlyWorker::sethours( double hour)
{
    if(hour >= 0.0)
        hours = hour;
    else
        throw invalid_argument("HourlyWorker hours must be > 0.0");
}



double HourlyWorker::gethours() const
{
    return hours;
}

void HourlyWorker::setwages( double wage)
{
    if ( wage > 0.0)
        wages = wage;
    else
        throw invalid_argument("HourlyWorker wage must be > 0.0 ");
}

double HourlyWorker::getwages() const
{
    return wages;
}



double HourlyWorker::earnings() const
{
    if(gethours()>=40)
        return getwages()*gethours()*1.5-40*getwages()*0.5;
    else
        return getwages()*gethours();
}

void HourlyWorker::print() const
{
    cout << "hourlyWorker employee: ";
    Employee::print();
    cout << "\nwages: " << getwages() << "hours: " << gethours();
}
