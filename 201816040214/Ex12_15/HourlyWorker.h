#ifndef HOURLYWORKER_H_INCLUDED
#define HOURLYWORKER_H_INCLUDED

//HourlyWorker.h
#include <string>//C++ standard string class
#include "Employee.h"
using namespace std;

class HourlyWorker: public Employee
{
public:
    HourlyWorker( const string &, const string &, const string &,
                double = 0.0, int = 0 );
    virtual ~HourlyWorker() {} // virtual destructor

    void setWage( double ); //set wage
    double getWage() const; //return wage

    void setHours( int ); //set hours
    int getHours() const; //return hours

    virtual double earnings() const override;//calculate earnings
    virtual void print() const override; //print object
private:
    double wage; //wage of per hour
    int hours; // the amount of working hours
};

#endif // HOURLYWORKER_H_INCLUDED
