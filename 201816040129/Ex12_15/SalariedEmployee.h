#ifndef SALARIEDEMPLOYEE_H_INCLUDED
#define SALARIEDEMPLOYEE_H_INCLUDED

#include<string>
#include"Employee.h"
using namespace std;
class SalariedEmployee : public Employee
{
public:
    SalariedEmployee(const string &,const string &,const string &,double=0.0);
    void setWeeklySalary(double);//set weekly salary
    double getWeeklySalary()const;//return weekly salary
    virtual double earnings()const override;//calculate earnings
    virtual void print()const override;//print object
private:
    double weeklySalary;//salary per week
};

#endif // SALARIEDEMPLOYEE_H_INCLUDED
