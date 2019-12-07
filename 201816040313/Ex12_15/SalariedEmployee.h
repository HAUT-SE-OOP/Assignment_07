#ifndef SALARIEDEMPLOYEE_H_INCLUDED
#define SALARIEDEMPLOYEE_H_INCLUDED
#include "Employee.h"
#include <string>

class SalariedEmployee:public Employee
{
public:
    SalariedEmployee(const std::string &,const std::string &,const std::string &,double=0.0);//constructor
    virtual ~SalariedEmployee(){}//destructor
    void setWeeklySalary(double);
    double getWeeklySalary()const;

    virtual void print()const; //print worker information
    virtual double earnings()const;// calculate wage
private:
    double weeklySalary;//salary per week
};


#endif // SALARIEDEMPLOYEE_H_INCLUDED
