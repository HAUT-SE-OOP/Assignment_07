//HourlyWeekly .h
//Hourly Worker class derived from employee
#ifndef HOURLYWORKER_H
#define HOURLYWORKER_H
#include<string>
#include "Employee.h"
using namespace std;

class HourlyWorker : public Employee
{
public:
    HourlyWorker(const string &,const string &,const string &,double =0.0, double=0.0);
    virtual ~HourlyWorker(){};//virtual destructor

    void setWage( double );//salary per hour
    double getWage()const;//return wage

    void setHours( double );//hour
    double getHours()const;//return hour

    virtual double earnings()const override;//calculate earnings
    virtual void print()const override;//print object
private:
    double wage;
    double hours;

};//end class Hourly Worker
#endif // HOURLYWORKER_H
