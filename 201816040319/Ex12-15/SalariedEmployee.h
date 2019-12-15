//Assignment 12-15
//salariedEmployee.h

#ifndef SALARIED_H
#define SALARIED_H

#include <string>
#include "Employee.h"//Employee class definition
using namespace std;
class SalariedEmployee:public Employee
{
public:
    SalariedEmployee(const string &,const string &,const string &,double);
    virtual ~SalariedEmployee(){}//virtual destructor

    void setWeeklySalary(double); //declare function to setWeeklySalary
    double getWeeklyEmployee()const;

    virtual double earnings()const override; //declare function to earnings
    virtual void print()const override;
private:
    double weeklySalary; //data member weeklySalary
};
#endif
