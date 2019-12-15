#ifndef BASEPLUS_H
#define BASEPLUS_H
#include<string>
using namespace std;
#include "CommissionEmployee.h"

class BasePlusCommissionEmployee:public CommissionEmployee
{
public:
    BasePlusCommissionEmployee(string,string,string,double,double,double);
    void setBaseSalary(double);
    double getBaseSalary();
    virtual double earnings();
    virtual void print();
private:
    double baseSalary;
};
#endif
