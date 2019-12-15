//BasePlusCommissionEmployee.h
#ifndef BASEPLUSCOMMISSIONEMPLOYEE_H_INCLUDED
#define BASEPLUSCOMMISSIONEMPLOYEE_H_INCLUDED
#include <string>
#include "CommissionEmployee.h"
class BasePlusCommissionEmployee:public CommissionEmployee
{
public:
    BasePlusCommissionEmployee(const std::string &,const std::string &,const std::string&,double=0.0,double =0.0,double=0.0);//constructor with six parameter
    virtual~BasePlusCommissionEmployee(){}//virtual destructor
    void setBaseSalary(double);//to set the baseSalary
    double getBaseSalary()const;//to get the baseSalary
    virtual double earnings()const override;//override the earning function
    virtual void print()const override;//override the print function
private:
    double baseSalary;
};


#endif // BASEPLUSCOMMISSIONEMPLOYEE_H_INCLUDED
