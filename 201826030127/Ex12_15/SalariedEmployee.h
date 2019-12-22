#ifndef SALARIEDEMPLOYEE_H_INCLUDED
#define SALARIEDEMPLOYEE_H_INCLUDED
#include<string.h>
#include"Employee.h"
class SalariedEmployee : public Employee
{
public :
    SalariedEmployee(const string &,const string &,const string &,double=0.0);
     ~SalariedEmployee();

    void setWeeklySalary(double);
    double getWeeklySalary()  const;
    virtual double earnings()  const;//calculate earnings
    virtual void print()  const;
private:
    double WeeklySalary;

};

#endif // SALARIEDEMPLOYEE_H_INCLUDED
