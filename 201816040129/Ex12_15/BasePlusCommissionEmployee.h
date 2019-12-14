#ifndef BASEPLUSCOMMISSIONEMPLOYEE_H_INCLUDED
#define BASEPLUSCOMMISSIONEMPLOYEE_H_INCLUDED
#include<string>
#include"CommissionEmployee.h"
using namespace std;

class BasePlusCommissionEmployee : public CommissionEmployee
{
public:
    BasePlusCommissionEmployee(const string &,const string &,const string &,double=0.0,double=0.0,double=0.0);
    void setBaseSalary(double);//set base salary
    double getBaseSalary()const;//return base salary
    virtual double earnings()const override;//calculate earnings
    virtual void print()const override;//print onject
private:
    double baseSalary;//base salary per week
};

#endif // BASEPLUSCOMMISSIONEMPLOYEE_H_INCLUDED
