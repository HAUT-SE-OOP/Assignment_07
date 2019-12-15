#ifndef HOURLYEMPLOYEE_H_INCLUDED
#define HOURLYEMPLOYEE_H_INCLUDED
#include "Employee.h"
class HourlyEmployee:public Employee
{
public:
    HourlyEmployee(string,string,string,double =0,double =0);
    double getwage();
    double gethours();
    double earnings();
    void print();
private:
    double wage;
    double hours;
};


#endif // HOURLYEMPLOYEE_H_INCLUDED
