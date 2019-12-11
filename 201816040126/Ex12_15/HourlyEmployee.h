#ifndef HOURLYEMPLOYEE_H_INCLUDED
#define HOURLYEMPLOYEE_H_INCLUDED
#include<iostream>
#include "Employee.h"


using namespace std;


class HourlyEmployee: public Employee
{
public:
    HourlyEmployee( const string &, const string &,
            const string &, double = 0.0, double = 0.0 );
    void setWage( double  );//function to set wage
    double getWage( );//function to get wage

    void setHours( double  );//function to set hours
    double getHours( );//function to get hours

    virtual void earnings();
private:
    double Wage;
    double Hours;
};
#endif // HOURLYEMPLOYEE_H_INCLUDED

