#ifndef SALARIED_H
#define SALARIED_H

#include <string>
#include "Employee.h"

using namespace std;
class SalariedEmployee:public Employee
{
public:
    SalariedEmployee(const string&,const string &,const string &,double=0.0);
    virtual ~SalariedEmployee(){};//virtual destructor

    virtual void setweeklysalary(double);//set weekly salary
    virtual double getweeklysalary()const;//return weekly salary

    //keyword virtual signals intent to override
    virtual double earnings()const override;//calculate earnings
    virtual void print()const override;//print object
private:
    double weeklysalary;//salary per week
};//end class SalariedEmployee
#endif // SALARIED_H
