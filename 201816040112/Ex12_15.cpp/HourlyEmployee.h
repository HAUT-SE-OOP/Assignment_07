#ifndef HOURLYWORKER_H_INCLUDED
#define HOURLYWORKER_H_INCLUDED
#include "Empolyee.h"
using namespace std;
class HourlyWorke : public Employee
{
public:
    HourlyWorke(const string &,const string &,const string &,const int,const double);
    virtual double earnings();
    virtual void print();
private:
    int hour;
    double hp;
};


#endif // HOURLYWORKER_H_INCLUDED
