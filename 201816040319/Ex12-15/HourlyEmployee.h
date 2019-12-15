#ifndef HOURLYEMPLOYEE_H
#define HOURLYEMPLOYEE_H
#include "Employee.h"
#include <string>
using namespace std;

class HourlyEmployee:public Employee //definition of class HourlyEmployee
{
public:
    HourlyEmployee(const string &,const string &,const string &,double,double);
    void setHour(double );
    double getHour();
    void setWage(double);
    double getWage();
    virtual double earnings();
private:

    double wage;
    double hours;

};
#endif // HOURLYEMPLOYEE_H
