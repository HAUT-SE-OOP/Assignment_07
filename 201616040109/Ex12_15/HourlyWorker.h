// Exercise 12.15 HourlyWorker.h
//HourlyWorker class derived from Employee
#ifndef HOURLYWORKER_H
#define HOURLYWORKER_H
#include<string>
#include<iostream>
#include"Employee.h"
using namespace std;

class HourlyWorker : public Employee
{
public:
    HourlyWorker(const string &,const string &,const string &,double = 0.0,double = 0.0);
    virtual ~HourlyWorker(){ }//virtual destructor

    void setWage( double );//set wage
    double getWage() const;//return wage

    void setHours( double );//set hours
    double getHours() const;//return hours

    virtual double earnings() const override;//calculate earnings
    virtual void print() const override;//print object
private:
    double wage;
    double hours;
};


#endif // HOURLYWORKER_H
