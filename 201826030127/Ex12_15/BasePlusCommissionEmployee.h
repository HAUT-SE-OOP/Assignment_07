#ifndef BASEPLUSCOMMISSIONEMPLOYEE_H_INCLUDED
#define BASEPLUSCOMMISSIONEMPLOYEE_H_INCLUDED
#include<string>
#include"CommissionEmployee.h"
using namespace std;
class BasePlusCommissionEmployee : public CommissionEmployee
{
public:
    BasePlusCommissionEmployee(const string &,const string &,const string &,double=0.0,double=0.0,double=0.0);
    void setbaseSalary(double);
    double getbaseSalary() const;
    virtual double earnings();
    virtual void print() const;

private:
    double baseSalary;

};


#endif // BASEPLUSCOMMISSIONEMPLOYEE_H_INCLUDED
