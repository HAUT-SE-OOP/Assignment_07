#ifndef HOURLYWORKER_H_INCLUDED
#define HOURLYWORKER_H_INCLUDED
#include<string.h>
#include"Employee.h"
using namespace std;

class HourlyWorker : public Employee
{
public:
    HourlyWorker(const string &,const string &,const string &,double = 0.0,double = 0.0);
    virtual ~HourlyWorker(){};
    virtual double earnings() const override;
    virtual void print() const override;
private:
    double wage;
    double hour;
};

#endif // HOURLYWORKER_H_INCLUDED
