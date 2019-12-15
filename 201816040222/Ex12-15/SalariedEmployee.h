//SalariedEmployee.h\
//SalariedEmployee class derived from Employee
#ifndef SALARIEDEMPLOYEE_H_INCLUDED
#define SALARIEDEMPLOYEE_H_INCLUDE
#include <string>
#include "Employee.h"
using namespace std;
class SalariedEmployee : public Employee
{

public:
    SalariedEmployee( const string &,const string &,const string &,double = 0.0 );
    virtual ~SalariedEmployee() { };
    void setWeeklySalary(double);
    double getWeeklySalary() ;
    virtual double earnings() const override;
    virtual void print() const override;

private:
    double weeklySalary;
};



