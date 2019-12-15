#ifndef HOURLYWORKER_H_INCLUDED
#define HOURLYWORKER_H_INCLUDED

#include <string>
#include "Employee.h" // Employee class definition
using namespace std;

class HourlyWorker : public Employee
{
public:
    HourlyWorker( const string &, const string &, const string &, double = 0.0, double = 0.0 );
    virtual ~HourlyWorker() {} // virtual destructor

    void setWage( double ); //set wage
    double getWage() const; //return wage

    void setHours( double ); //set Hours
    double getHours() const; //return Hours

    virtual double earnings() const override; // calculate earnings
    virtual void print() const override; // print object
private:
    double wage; // one hourly of salary
    double hours; // total hours
};

#endif // HOURLYWORKER_H_INCLUDED
