#ifndef HOURLYEMPLOYEE_H_INCLUDED
#define HOURLYEMPLOYEE_H_INCLUDED

#include<bits/stdc++.h>
using namespace std;
#include "Employee.h"
class HourlyEmployee:public Employee
{
public:
    HourlyEmployee( const string &, const string &, const string &, int=0, int=0 );//constructor function
    virtual ~HourlyEmployee(){};//virtual destructor

    void setHours( int );//set hours
    int getHours()const;//get hours
    void setWage( int );//set wage
    int getWage()const;//get wage

    virtual double earnings()const override;//calculate earnings
    virtual void print()const override;//print object
private:
    int hours;
    int wage;
};//end class HourlyEmployee


#endif // HOURLYEMPLOYEE_H_INCLUDED
