#ifndef HOURLYEMPLOYEE_H_INCLUDED
#define HOURLYEMPLOYEE_H_INCLUDED

#include<string>
#include"Employee.h"
class HourlyEmployee : public Employee
{
public:
    HourlyEmployee(const string &,const string &,const string &,double,int);
    virtual double earnings()const override;//return
    virtual void print()const override;//print
private:
    double wage;
    int hours;
};

#endif // HOURLYEMPLOYEE_H_INCLUDED
