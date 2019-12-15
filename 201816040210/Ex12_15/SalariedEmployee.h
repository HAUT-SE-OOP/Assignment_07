#ifndef SALARIEDEMPLOYEE_H_INCLUDED
#define SALARIEDEMPLOYEE_H_INCLUDED

#include<bits/stdc++.h>
using namespace std;
#include "Employee.h"

class SalariedEmployee :public Employee
{
public:
    SalariedEmployee( const string &, const string &, const string &, double=0.0 );//constructor function
    virtual ~SalariedEmployee(){};//virtual destructor

    void setWeeklySalary( double );//function to set weekly salary
    double getWeeklySalary()const;//function to get weekly salary

    virtual double earnings()const override;//calculate earnings
    virtual void print()const override;//print object
private:
    double weeklySalary;
};//end class SalariedEmployee


#endif // SALARIEDEMPLOYEE_H_INCLUDED
