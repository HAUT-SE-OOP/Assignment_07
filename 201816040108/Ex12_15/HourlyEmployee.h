
//HourlyEmployee.h

#ifndef HOURLY_H
#define HOURLY_H

#include"Employee.h"

class HourlyEmployee : public Employee
{
public:
    HourlyEmployee(const string &, const string &, const string &,double = 0, int = 0);
    virtual ~HourlyEmployee() { };
    void setHWage(double );
    void setHHours(int );
    double getHWage() const;
    int getHHours() const;
    virtual double earnings() const override;
    virtual void print() const override;
private:
    double HWage;
    int HHours;
};
#endif
