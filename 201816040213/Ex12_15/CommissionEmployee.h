#ifndef COMMISSIONEMPLOYEE_H_INCLUDED
#define COMMISSIONEMPLOYEE_H_INCLUDED

#include <string>
#include "Employee.h" // Employee class definition
using namespace std;

class CommissionEmployee : public Employee
{
public:
    CommissionEmployee( const string &, const string &, const string &, double = 0.0, double = 0.0 );
    virtual ~CommissionEmployee() { } // virtual destructor

    void setGrossSales( double ); //set gross sales amount
    double getGrossSales() const; //return gross sales amount

    void setCommissionRate( double ); //set commission rate
    double getCommissionRate() const; //return commission rate

    virtual double earnings() const override; // calculate earnings
    virtual void print() const override; // print object
private:
    double grossSales; // gross weekly sales
    double commissionRate; // commission percentage
}; // end class CommissionEmployee

#endif // COMMISSIONEMPLOYEE_H_INCLUDED
