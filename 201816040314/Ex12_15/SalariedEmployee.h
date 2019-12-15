//SalariedEmployee.h
#ifndef SALARIEDEMPLOYEE_H_INCLUDED
#define SALARIEDEMPLOYEE_H_INCLUDED
#include <string>
#include "Employee.h"
class SalariedEmployee:public Employee
{
public:
    SalariedEmployee(const std::string &,const std::string &,const std::string &,double =0.0);//constructor with four parameter
    virtual ~SalariedEmployee(){}//virtual destructor

    void setWeeklySalary(double);//to set the weeklySalary
    double getWeeklySalary()const;//to get the weeklySalary
    virtual double earnings() const override;//override the earning function
    virtual void print()const override;//override the print function
private:
    double weeklySalary;

};

#endif // SALARIEDEMPLOYEE_H_INCLUDED
