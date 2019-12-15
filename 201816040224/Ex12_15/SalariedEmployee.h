#ifndef SALARIED_H
#define SALARIED_H

#include<string>
#include"Employee.h"

class SalariedEmployee:public Employee
{
public:
    SalariedEmployee(const std:: string &,const std::string &,const std::string &,double = 0.0);
    virtual ~SalariedEmployee(){}

    void setWeeklySalary(double);
    double getWeeklySalary()const;//return weekly salary

    virtual double earnings()const override;//calculate earnings
    virtual void print()const override;//print object

private:
    double weeklySalary;
};
#endif // SALARIED_H
