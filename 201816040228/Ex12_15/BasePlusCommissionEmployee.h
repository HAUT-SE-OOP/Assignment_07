#ifndef BASEPLUS_H
#define BASEPLUS_H

#include <string>
#include "CommissionEmployee.h"

using namespace std;

class BasePlusCommissionEmployee : public CommissionEmployee
{
public:
    BasePlusCommissionEmployee( const string &, const string &, const string &, double=0.0, double=0.0, double=0.0);
    virtual ~BasePlusCommissionEmployee() {}//virtual destructor

    void setBaseSalary( double );
    double getBaseSalary() const;

    virtual double earnings() const override;
    virtual void print() const override;
private:
    double baseSalary;//base salary
};




#endif // BASEPLUS_H

