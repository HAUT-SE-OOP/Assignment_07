#ifndef HOURLYEMPLOYEE_H_INCLUDED
#define HOURLYEMPLOYEE_H_INCLUDED

#include <string>
#include"Employee.h"
using namespace std;
class HourlyEmployee:public Employee
{
public:
    HourlyEmployee(const string &,const string &,const string &,double=0.0,double=0.0);
    void setwage(double);
    double getwage()const;
    void sethours(double);
    double gethours()const;
    virtual double earnings();
    virtual void print() ;
private:
    double wage;
    double hours;
};

#endif // HOURLYEMPLOYEE_H_INCLUDED
