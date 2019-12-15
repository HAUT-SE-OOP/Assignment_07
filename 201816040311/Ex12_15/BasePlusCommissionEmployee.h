#ifndef BASEPLUS_H
#define BASEPLUS_H

#include <string>
#include "CommissionEmployee.h"

using namespace std;

class BasePlusCommissionEmployee:public CommissionEmployee
{
public:
    BasePlusCommissionEmployee(const string &,const string &,const string &,double=0.0,double=0.0,double=0.0);
    virtual ~BasePlusCommissionEmployee(){};

    void setbasesalary(double);//set base salary
    double getbasesalary()const;//return base salary

    //keyword virtual signals intent to override
    virtual double earnings()const override;//calculate earnings
    virtual void print()const override;//print object
private:
    double basesalary;//base salary per week
};//end class
#endif // BASEPLUS_H
