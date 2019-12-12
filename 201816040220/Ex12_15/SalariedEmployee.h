#ifndef SALARIED_H
#define SALARIED_H
using namespace std;

#include <string>
#include "Employee.h"

class SalariedEmployee: public Employee
{
public:
    SalariedEmployee(string,string,string,double = 0.0);
    virtual ~ SalariedEmployee() {}

    void setWeeklySalary(double);
    double getWeeklySalary() const;

    virtual double earnings();
    virtual void print();
private:
    double weeklySalary;
};
#endif
