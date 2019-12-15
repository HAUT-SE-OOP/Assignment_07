//HourlyWorker.h
#ifndef HOURLYWORKER_H_INCLUDED
#define HOURLYWORKER_H_INCLUDED

#include <string>
#include "Employee.h"
using namespace std;

class HourlyWorker:public Employee
{
public:
    HourlyWorker(const string &first,const string &last,const string &ssn,double wage,double hours);
    virtual double earnings()const;//calculate earnings
    virtual void print()const;//virtual
private:
    double wage;
    double hours;
};


#endif // HOURLYWORKER_H_INCLUDED
