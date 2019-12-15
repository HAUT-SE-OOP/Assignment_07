#ifndef HOURLYWORKER_H
#define HOURLYWORKER_H
#include"Employee.h"
class HourlyWorker:public Employee
{
private:
    double wage;
    int hours;
public:
    HourlyWorker(const string &,const string &,const string &,double,int);
    virtual double earnings() const override;
    virtual void print() const override;
};
#endif
