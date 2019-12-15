#ifndef HOURLYWOKER_H
#define HOURLYWOKER_H
#include"Employee.h"
using namespace std;
#include<iostream>
class HourlyWorker:public Employee
{
public:
    HourlyWorker(string,string,string,double,double);
    void setWage(double);
    double getWage();
    void setHour(double);
    double getHour();
    virtual double earnings();
    virtual void print();
private:
    double Wage;
    double Hours;
};
#endif // HOURLYWOKER_H
