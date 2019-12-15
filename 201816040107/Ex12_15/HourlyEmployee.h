#ifndef HOURLYWORKER_H_INCLUDED
#define HOURLYWORKER_H_INCLUDED
#include <iostream>
#include <stdexcept>
#include "Employee.h"
using namespace std;
class HourlyWorker:public Employee
{
public:

    HourlyWorker(const string &,const string &,const string &,double=0.0,double=0.0);

    void setWage(double);//set wage;
    double getWage();//return wage;
    void setHours(double);//set hours;
    double getHours();//return hours;
    virtual double earnings() const override;
    virtual void print() const override;
private:
    double wage;
    double hours;
};


#endif // HOURLYWORKER_H_INCLUDED
