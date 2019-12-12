#ifndef SALARIEDEMPLOYEE_H_INCLUDED
#define SALARIEDEMPLOYEE_H_INCLUDED

#include <string>
#include "Employee.h" // Employee class definition

class SalariedEmployee : public Employee
{
public:
    SalariedEmployee( const string &, const string &, const string &, double = 0.0 );
    virtual ~SalariedEmployee() {} // virtual destructor

    void setWeeklySalary( double ); //set weekly salary
    double getWeeklySalary() const; //return weekly salary

    virtual double earnings() const override; // calculate earnings
    virtual void print() const override; // print object
private:
    double weeklySalary; // salary per week
}; // end class SalariedEmployee

#endif // SALARIEDEMPLOYEE_H_INCLUDED
