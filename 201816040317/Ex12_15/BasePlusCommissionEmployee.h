#ifndef BASEPLUSCOMMISSIONEMPLOYEE_H_INCLUDED
#define BASEPLUSCOMMISSIONEMPLOYEE_H_INCLUDED

#include <string>
#include "CommissionEmployee.h" //CommissionEmployee class definition
using namespace std;

class BasePlusCommissionEmployee : public CommissionEmployee
{
public:
    BasePlusCommissionEmployee( const string &, const string &, const string &, double = 0.0, double = 0.0, double = 0.0 );
    virtual ~BasePlusCommissionEmployee() { } // virtual destructor

    void setBaseSalary( double ); //set base salary
    double getBaseSalary() const; //return base salary

    virtual double earnings() override; // calculate earnings
    virtual void print() override; // print object
private:
    double baseSalary; // base salary per week
}; // end class BasePlusCommissionEmployee

#endif // BASEPLUSCOMMISSIONEMPLOYEE_H_INCLUDED
