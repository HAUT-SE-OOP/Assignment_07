//
//  HourlyWorker.cpp
//  Ex12_15
//
//  Created by misonomayubw on 2019/12/15.
//  Copyright © 2019 misonomayubw. All rights reserved.
//

#include "HourlyWorker.hpp"
#include <iostream>

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
    //set wage
    wage=w;
}

double HourlyWorker::getWage() const
{
    //get wage
    return wage;
}

void HourlyWorker::setHours(double h)
{
    //set hours
    hours=h;
}

double HourlyWorker::getHours() const
{
    //get hours
    return hours;
}

double HourlyWorker::earnings() const
{
    double rt1, rt2;
    tr1 = wage*hours+(hours-40)*wage*0.2;
    rt2 = wage*hours;
    
    //judge hours
    if(hours>40)
    {
        return rt1;
    }
    else
    {
        return rt2;
    }

}

void HourlyWorker::print()
{
   cout <<"Hourly Worker: ";
   Employee::print();
   cout<<"\nHourly salary: "<<earnings();
}
