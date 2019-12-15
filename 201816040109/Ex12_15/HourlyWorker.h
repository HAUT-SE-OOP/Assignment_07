#ifndef HOURLYWORKER_H
#define HOURLYWORKER_H
#include <iostream>
using namespace std;
#include "Employee.h"
class HourlyWorker : public Employee
{
public:
    HourlyWorker(const string &, const string &, const string &, double = 0.0, double = 0.0);
    virtual ~HourlyWorker() {}
    void setWage(double);
    double getWage() const;
    void setHours(double);
    double getHours() const;
    virtual double earnings() const override;
    virtual void print() const override;

private:
    double wage;  //每小时工资
    double hours; //工作时长
};

#endif //HOURLYWORKER_H