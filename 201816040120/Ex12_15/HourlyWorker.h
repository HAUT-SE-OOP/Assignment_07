#ifndef HOURLYWORKER_H_INCLUDED
#define HOURLYWORKER_H_INCLUDED
#include <string>
#include "Employee.h"
class HourlyWorker : public Employee
{
public:
    HourlyWorker(const string &, const string &, const string &,double = 0.0, double = 0.0);
    virtual ~HourlyWorker(){}


    virtual double earnings() const override;
    virtual void print() const override;

    void setWage(double );
    double getWage() const ;

    void setHours(double );
    double getHours() const ;
private:
    double wage;
    double hours;
};

#endif // HOURLYWORKER_H_INCLUDED
