#ifndef COMMISSION_H
#define COMMISSION_H

#include <string>
#include "Employee.h"

class CommissionEmployee: public Employee
{
public:
    CommissionEmployee (string,string,string,double = 0.0,double = 0.0);
    virtual ~ CommissionEmployee () {}

    void setCommissionRate(double);
    double getCommissionRate() const;

    void setGrossSales(double);
    double getGrossSales() const;

    virtual double earnings();
    virtual void print();
private:
    double grossSales;
    double commissionRate;
};
#endif
