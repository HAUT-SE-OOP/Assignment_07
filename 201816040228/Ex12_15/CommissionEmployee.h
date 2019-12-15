#ifndef COMMISSION_H
#define COMMISSION_H

#include "Employee.h"
#include <string>
using namespace std;

class CommissionEmployee : public Employee
{
public:
    CommissionEmployee( const string &, const string & , const string & ,double=0.0, double=0.0);
    virtual ~CommissionEmployee() {}//virtual destructor

    void setCommissionRate( double );
    double getCommissionRate() const;

    void setGrossSales( double );
    double getGrossSales() const;

    virtual double earnings() const override;
    virtual void print() const override;

private:
    double grossSales;//gross weekly sales
    double commissionRate;//commission percentage

};

#endif // COMMISSION_H

