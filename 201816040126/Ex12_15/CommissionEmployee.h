#ifndef COMMISSIONEMPLOYEE_H_INCLUDED
#define COMMISSIONEMPLOYEE_H_INCLUDED

#include<iostream>
#include "Employee.h"

using namespace std;


class CommissionEmployee: public Employee
{
private:
    double Rate;
    double GrossSales;
public:
    CommissionEmployee( const string &, const string &,
            const string & , double = 0.0, double = 0.0 );

    void setGrossSales( double );
    double getGrossSales();

    void setCommissionRate( double );
    double getCommissionRate();

    double getTotal();

    virtual void earnings();

};
#endif // COMMISSIONEMPLOYEE_H_INCLUDED
