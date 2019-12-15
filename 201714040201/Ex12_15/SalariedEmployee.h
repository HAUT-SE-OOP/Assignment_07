//SalariedEmployee.h
//SalariedEmployee class derived from Employee
#ifndef SALARIEDEMPLOYEE_H
#define SALARIEDEMPLOYEE_H

#include <string>
#include "Employee.h"//Employee class definition

using namespace std;

class SalariedEmployee:public Employee
{
public:
    SalariedEmployee(const string &,const string &,const string &,double);//constructor
    virtual ~SalariedEmployee(){}//virtual destructor
    void setWeeklySalary(double );//set salary
    double getWeeklySalary()const;//return salary
    virtual double earnings() override;//calculate earnings
    virtual void print()override;//print object
private:
    double weeklySalary;
};//end class SalariedEmployee

#endif // SALARIEDEMPLOYEE_H
