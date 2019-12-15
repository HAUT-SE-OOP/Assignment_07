#ifndef HOURLYWORKER_H
#define HOURLYWORKER_H
#include <string>
#include "Employee.h"
using namespace std;
class HourlyWorker:public Employee
{
public:
    HourlyWorker(const string &,const string &,const string &,double=0.0,double=0.0);

       virtual double earnings() const override;
    virtual void print() const override;
    void setWage(double);
    double getWage();
    void seHours(double);
    double getHours();
private:
    double wage;
    double hours;
};
