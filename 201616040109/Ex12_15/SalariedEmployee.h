// Exercise 12.15 Solution:SalariedEmployee.h
//SalariedEmployee class derived from Employee
#ifndef SALARIEDEMPLOYEE_H
#define SALARIEDEMPLOYEE_H

#include<string>
#include"Employee.h"
#include<iostream>
using namespace std;
class SalariedEmployee : public Employee
{
public:
    SalariedEmployee( const string &,const string &,const string &,double = 0.0 );
    virtual ~SalariedEmployee(){ }//virtual destructor

    void setWeeklySalary( double );//set weekly salary
    double getWeeklySalary()const;//return weekly salary

    virtual double earnings() const override;//calculate earnings
    virtual void print() const override;//print object
private:
    double weeklySalary;//salary per week
};

#endif // SALARIEDEMPLOYEE_H
