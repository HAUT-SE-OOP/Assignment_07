#ifndef SALARIEDEMPLOYEE_H_INCLUDED
#define SALARIEDEMPLOYEE_H_INCLUDED
#include"Employee.h"
class SalariedEmployee:public Employee
{
public:
    SalariedEmployee(string,string,string,double);
    void setWeeklySalary(double);
    double getWeeklySalary();
    virtual double earnings();
    virtual void print();
private:
    double weeklySalary;

};


#endif // SALARIEDEMPLOYEE_H_INCLUDED
