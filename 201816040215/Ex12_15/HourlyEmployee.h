#ifndef HOURLYWORKER_H_INCLUDED
#define HOURLYWORKER_H_INCLUDED

#include <string>
#include "Employee.h"

class HourlyWoker
{
public:
    HourlyWoker( const string &, const string &, const string &,
                     double = 0.0, double = 0.0 );
    virtual ~HourlyWoker(){}

    void setWage( double );
    double getWage() const;

    void setHours( double );
    double getHours() const;

    virtual double earnings() const override;
    virtual void print() const override;
private:
    double wage;
    int hours;
};

#endif // HOURLYWORKER_H_INCLUDED
