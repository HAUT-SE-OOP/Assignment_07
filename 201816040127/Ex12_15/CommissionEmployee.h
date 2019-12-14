#ifndef COMMISSEMPLOYEE_H_INCLUDED
#define COMMISSEMPLOYEE_H_INCLUDED

#include <string>
#include "Employee.h"//Employee class definition

class CommissionEmployee : public Employee
{
public:
    CommissionEmployee( const std::string &, const std::string &,
            const std::string &,double = 0.0,double = 0.0);
    virtual ~CommissionEmployee(){}//virtual destructor

    void setCommissionRate( double );//set commission rate
    double getCommissionRate() const;//return commission rate

    void setGrossSales( double );//set gross sales amount
    double getGrossSales() const;//return gross sales amount

    virtual double earnings() const override;//calculate earnings
    virtual void print() const override; // print CommissionEmployee object
private:
    double grossSales; // gross weekly sales
    double commissionRate; // commission percentage
};

#endif // COMMISSEMPLOYEE_H_INCLUDED
