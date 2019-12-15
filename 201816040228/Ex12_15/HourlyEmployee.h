#ifndef HOURLY_H
#define HOURLY_H

#include "Employee.h"
#include <string>
using namespace std;

class HourlyEmployee : public Employee
{
public:
    HourlyEmployee( const string &, const string & , const string & ,double=0.0, double=0.0);
    virtual ~HourlyEmployee() {}//virtual destructor

    void setHourlyWage( double );
    double getHourlyWage() const;

    void setHours( double );
    double getHours() const;

    virtual double earnings() const override;
    virtual void print() const override;

private:
    double hourlyWage;// hourly wage
    double hours;//hours

};

#endif // HOURLY_H


