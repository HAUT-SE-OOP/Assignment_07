#include <iostream>
#include "HourlyWorker.h"

using namespace std;

HourlyWorker::HourlyWorker(const string &first, const string &last, const string &ssn,
      const double w,const double h)
      :Employee(first,last,ssn)
      {
          wage=w;
          hours=h;
      }

void HourlyWorker::setWage(double w)
{
    wage=w;
}

double HourlyWorker::getWage() const
{
    return wage;
}

double HourlyWorker::getHours() const
{
    return hours;
}

void HourlyWorker::setHours(double h)
{
    hours=h;
}

double HourlyWorker::earnings() const
{
    if(hours>40)
    {
        return wage*hours+(hours-40)*wage*0.2;
    }
    else
    {
        return wage*hours;
    }

}

void HourlyWorker::print()
{
   cout <<"Hourly Worker: ";
   Employee::print();
   cout<<"\nHourly salary: "<<earnings();
}
