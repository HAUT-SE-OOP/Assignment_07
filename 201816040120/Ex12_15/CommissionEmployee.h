#ifndef COMMISSIONEMPLOYEE_H_INCLUDED
#define COMMISSIONEMPLOYEE_H_INCLUDED
#include "Employee.h"
#include <string>
class CommissionEmployee : public Employee
{
public:
    CommissionEmployee(const string &, const string &,const string &,double = 0.0 , double = 0.0);
    virtual ~CommissionEmployee(){}

    void setCommissionRate(double);
    double getCommissionRate() const;

    void setGrossSales( double );
    double getGrossSales() const;

    virtual double earnings() const override;
    virtual void print() const override;

private:
    double grossSales;
    double commissionRate;
};

#endif // COMMISSIONEMPLOYEE_H_INCLUDED
