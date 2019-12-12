#ifndef HOURLYWORKER_H
#define HOURLYWORKER_H
#include"Employee.h"

class HourlyWorker : public Employee
{
public:
    HourlyWorker(const string &, const string &, const string &, double = 0.0, double = 0);
    virtual double earnings() const override;
    virtual void print() const override;
    double getHour() const;
    double getWage() const;

private:
    double wage;
    int hours;

};


#endif // PIECEWORKER_H



