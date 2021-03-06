#ifndef BASEPLUSCOMMISSIONEMPLOYEE_H_INCLUDED
#define BASEPLUSCOMMISSIONEMPLOYEE_H_INCLUDED
#include <string>
#include "CommissionEmployee.h"
using namespace std;
class BasePlusCommissionEmployee: public CommissionEmployee
{
public:
    BasePlusCommissionEmployee(const string &,const string &,const string &,double=0.0,double=0.0,double=0.0);

    void setBaseSalary(double);//set basesalary;
    double getBaseSalary() const;//return basesalary;
    virtual double earnings() const override;
    virtual void print() const override;
private:
    double baseSalary;
};


#endif // BASEPLUSCOMMISSIONEMPLOYEE_H_INCLUDED
