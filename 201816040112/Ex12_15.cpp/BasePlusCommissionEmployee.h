#ifndef BASEPLUSCOMMISSIONEMPLOYEE_H_INCLUDED
#define BASEPLUSCOMMISSIONEMPLOYEE_H_INCLUDED

#include <string>
#include "CommissionEmployee.h"

class BasePlusCommissionEmployee : public CommissionEmployee
{
public :
    BasePlusCommissionEmployee( const std::string & , const std::string & , const std::string &
                               ,double = 0.0 , double = 0.0 , double = 0.0 );
    virtual ~BasePlusCommissionEmployee() { };//virtual destructor

    void setBaseSalary( double );//set base salary
    double getBaseSalary() const;//return base salary

    virtual double earnings() ;//calculate earnings
    virtual void print() ;//print object
private :
    double baseSalary;//base salary per week
};

#endif // BASEPLUSCOMMISSIONEMPLOYEE_H_INCLUDED
