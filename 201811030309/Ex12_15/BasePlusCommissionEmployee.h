#ifndef BASEPLUSCOMMISSIONEMPLOYEE_H_INCLUDED
#define BASEPLUSCOMMISSIONEMPLOYEE_H_INCLUDED
#include "CommissionEmployee.h"

class BasePlusCommissionEmployee : public CommissionEmployee
{
public:
    /*initializing the firstname, lastname, socialSecurityNumber, grossSales, commissionRate, baseSalary*/
    BasePlusCommissionEmployee(const string &, const string &, const string &,
                               double=0.0, double=0.0, double=0.0);
    /*set and get the baseSalary*/
    void setBaseSalary(double);
    double getBaseSalary() const;
    /*Redefine pure virtual functions and virtual functions*/
    virtual double earnings() const override;
    virtual void print() const override;
private:
    double baseSalary;
};


#endif // BASEPLUSCOMMISSIONEMPLOYEE_H_INCLUDED
