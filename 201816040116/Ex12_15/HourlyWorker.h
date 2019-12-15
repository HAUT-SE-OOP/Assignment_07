#ifndef HOURLYWORKER_H_INCLUDED
#define HOURLYWORKER_H_INCLUDED

#include<iostream>
#include"Employee.h"
#include"HourlyWorker.h"
#include<string>
class HourlyWorker : public Employee
{
public:
    HourlyWorker(string,string,string,double,double);
    void setwage(double);
    void sethours(double);
    double getwage();
    double gethours();
    double earnings();
    void print();
private:
    double wage;
    double hours;
    double earn;
};
#endif // HOURLYWORKER_H_INCLUDED
