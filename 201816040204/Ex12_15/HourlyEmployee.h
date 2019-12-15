#include <iostream>
#include"Employee.h"
using namespace std;

class HourlyEmployee : public Employee
{
    HourlyEmployee(const string &, const string &, const string &, double = 0.0, double = 0.0);
    virtual ~HourlyEmployee() {}
    void setWage(double);
    double getWage ()const;
    void setHours(double);
    double getHours()const;
    virtual double earnings()const override;
    virtual void print()const override;
private:
    double wage;
    double hours;
};
