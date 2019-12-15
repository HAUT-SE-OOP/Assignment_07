#ifndef COMMISSIONEMPLOYEE_H_INCLUDED
#define COMMISSIONEMPLOYEE_H_INCLUDED
#include "Employee.h"

using namespace std;

class CommissionEmployee : public Employee
{
public:
    /*initializing the firstname, lastname, socialSecurityNumber, grossSales, commissionRate*/
    CommissionEmployee(const string &, const string &, const string &, double=0.0, double=0.0);
    /*set and get the grossSales and the commission Rate*/
    void setCommissionRate(double);
    double getCommissionRate() const;
    void setGrossSales(double);
    double getGrossSales() const;
    /*Redefine pure virtual functions and virtual functions*/
    virtual double earnings() const override;
    virtual void print() const override;
private:
    double grossSales;
    double commissionRate;
};


#endif // COMMISSIONEMPLOYEE_H_INCLUDED
