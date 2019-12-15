#ifndef SALARIEDEMPLOYEE_H_INCLUDED
#define SALARIEDEMPLOYEE_H_INCLUDED
#include <string>
#include "Employee.h"
using namespace std;
class SalariedEmployee : public Employee
{
public:
    SalariedEmployee(const string &,const string &,const string &,double=0.0);

    void setWeeklySalary(double);//set weeklysalary;
    double getWeeklySalary() const;//return weeklysalary;
    virtual double earnings() const override;
    virtual void print() const override;
private:
    double weeklySalary;
};


#endif // SALARIEDEMPLOYEE_H_INCLUDED
