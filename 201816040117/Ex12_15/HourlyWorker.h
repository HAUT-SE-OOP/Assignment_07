#ifndef HOURLYWORKER_H_INCLUDED
#define HOURLYWORKER_H_INCLUDED
#include"Employee.h"
class HourlyWorker:public Employee
{
public:
    HourlyWorker(string,string,string,double,double);
    void setWage(double);
    double getWage();
    void setHours(double);
    double getHours();
    virtual double earnings();
    virtual void print();
private:
    double wage;
    double hours;
};


#endif // HOURLYWORKER_H_INCLUDED
