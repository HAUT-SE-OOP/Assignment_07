#ifndef BASEPLUS_H
#define BASEPLUS_H
#include <string>// C++ standard string class
#include "CommissionEmployee.h"// CommissionEmployee class definition

class BasePlusCommissionEmployee : public CommissionEmployee
{
public:
    BasePlusCommissionEmployee(const string &,const string &,const string &,double=0.0,double=0.0,double=0.0);
    virtual ~BasePlusCommissionEmployee() {}// virtual destructor

    void setBaseSalary(double);
    double getBaseSalary()const;

    virtual double earnings()const override;// calculate earnings
    virtual void print()const override;// print
private:
    double BaseSalary;
};// end class BasePlusCommissionEmployee

#endif // BASEPLUS_H
