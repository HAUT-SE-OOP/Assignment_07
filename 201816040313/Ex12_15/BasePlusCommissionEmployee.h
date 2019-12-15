#ifndef BASEPLUSCOMMISSIONEMPLOYEE_H_INCLUDED
#define BASEPLUSCOMMISSIONEMPLOYEE_H_INCLUDED
#include "CommissionEmployee.h"
#include <string>

class BasePlusCommissionEmployee:public CommissionEmployee
{
public:
    BasePlusCommissionEmployee(const std::string &,const std::string &,const std::string &,double=0.0,double=0.0,double=0.0);//constructor
    virtual ~BasePlusCommissionEmployee(){}//destructor
    void setBaseSalary(double);
    double getBaseSalary()const;

    virtual void print()const; //print worker information
    virtual double earnings()const;// calculate wage
private:
    double baseSalary;//base salary per week
};


#endif // BASEPLUSCOMMISSIONEMPLOYEE_H_INCLUDED
