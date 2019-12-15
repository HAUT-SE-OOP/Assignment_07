#ifndef SALARIED_H
#define SALARIED_H
#include<bits/stdc++.h>
#include"Employee.h"
using namespace std;
class SalariedEmployee:public Employee
{
public:
    SalariedEmployee(string ,string ,string ,double=0.0);
    virtual ~ SalariedEmployee(){};
    void setweeklysalary(double );
    double getweeklysalary()const;
    virtual double earnings() const override;
    virtual void print()const override;
private:
    double weeklysalary;
};

#endif // SALARIED_H
