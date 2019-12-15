#include <iostream>
#include <stdexcept>
#include "HourlyWorker.h"
using namespace std;

HourlyWorker::HourlyWorker(const string &first , const string &last , const string &ssn  , double Wage , double  Hours )
:Employee( first , last , ssn )
{
    wage=Wage;
    hours=Hours;
}
double HourlyWorker::earnings() const
{
    if(hours>40)
    {
        return (hours-40)*1.5*wage+40*wage;
    }
    else if (hours<=40)
    {
        return hours*wage;
    }
}

void HourlyWorker::print() const
{
cout << "HourlyWorker employee : ";
    Employee::print();
    cout << "\nwage : " << wage
    << "; hours : " << hours ;
}
