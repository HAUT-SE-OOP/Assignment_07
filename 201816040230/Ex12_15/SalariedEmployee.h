#ifndef SALARIED_H
#define SALARIED_H
#include<string>
using namespace std;
#include "Employee.h"
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
#endif // SALARIED_H
