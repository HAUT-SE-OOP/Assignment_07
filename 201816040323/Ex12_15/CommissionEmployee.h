#ifndef COMMISSION_H
#define COMMISSION_H

#include <string> // C++ standard string class
#include "Employee.h"
using namespace std ;
class CommissionEmployee : public Employee
{
public :
    CommissionEmployee (const string &, const string &, const string &, double =0.0, double =0.0 ) ;// constructor
    virtual ~CommissionEmployee() {}// virtual destructor
    void setCommissionRate (double) ;
    double getCommissionRate ()const ;
    void setGrossSales (double) ;// set gross sales amount
    double getGrossSales () const ;// return gross sales amount
    virtual double earnings() const override ;// calculate earnings
    virtual void print () const override  ;// print CommissionEmployee object
private :
    double grossSales ;// gross weekly sales
    double commissionRate ;// commission percentage
};

#endif // COMMISSION
