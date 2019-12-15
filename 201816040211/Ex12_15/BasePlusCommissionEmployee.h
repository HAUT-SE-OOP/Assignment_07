#ifndef BASEPLUSCOMMISSIONEMPLOYEE_H_INCLUDED
#define BASEPLUSCOMMISSIONEMPLOYEE_H_INCLUDED

//BasePlusCommissionEmployee.h
#include <string> //C++ standard string class
#include "CommissionEmployee.h"
using namespace std;

class BasePlusCommissionEmployee : public CommissionEmployee
{
public:
    BasePlusCommissionEmployee( const string &, const string &, const string &,
                               double = 0.0, double = 0.0, double = 0.0 );
    virtual ~BasePlusCommissionEmployee() {} //virtual destructor

    void setBaseSalary( double ); //set base salary
    double getBaseSalary() const; //return base salary

    //keyword virtual signals intent to override
    virtual double earnings() const override; //calculate earnings
    virtual void print() const override; //print object
private:
    double baseSalary; //base salary per week
};//end class BasePlusCommissionEmployee

#endif // BASEPLUSCOMMISSIONEMPLOYEE_H_INCLUDED
