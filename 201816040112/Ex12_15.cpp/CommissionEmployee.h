#ifndef COMMISSIONEMPLOYEE_H_INCLUDED
#define COMMISSIONEMPLOYEE_H_INCLUDED

#include <string>
#include "Empolyee.h"

class CommissionEmployee : public Employee
{
public :
    CommissionEmployee( const std::string &, const std::string &,const std::string &,double = 0.0,double = 0.0);
    virtual ~CommissionEmployee() { };

    void setCommissionRate( double );
    double getCommissionRate() const;

    void setGrossSales( double );
    double getGrossSales() const;

    virtual double earnings() ;
    virtual void print();
private :
    double grossSales;
    double commissionRate;
};

#endif // COMMISSIONEMPLOYEE_H_INCLUDED
