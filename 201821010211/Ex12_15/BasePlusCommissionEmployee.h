#ifndef BASEPLUSCOMMISSIONEMPLOYEE_H_INCLUDED
#define BASEPLUSCOMMISSIONEMPLOYEE_H_INCLUDED

#include <string>
#include "CommissionEmployee.h"
using namespace std;
class BasePulsCommissionEmployee:public CommissionEmployee
{
public:
    BasePulsCommissionEmployee(const string &,const string &,const string &,double=0.0,double=0.0,double=0.0);
    void setBaseSalary(double);
    double getBaseSalary()const;
    virtual double earnings();
    virtual void print() ;
private:
    double baseSalary;
};

#endif // BASEPLUSCOMMISSIONEMPLOYEE_H_INCLUDED
