#ifndef HOURLYEMPLOYEE_H_INCLUDED
#define HOURLYEMPLOYEE_H_INCLUDED

#include "Employee.h"

class HourlyEmployee:public Employee
{
public:
    HourlyEmployee(const string, const string, const string, double = 0.0,double = 0.0);
    virtual ~ HourlyEmployee(){};

    void setWage(double);
    double getWage();

    void setHours(double);
    double getHours();

    virtual double earnings() const;
    virtual void print()const;
private:
    double Wage;
    double Hours;
};

#endif // HOURLYEMPLOYEE_H_INCLUDED
