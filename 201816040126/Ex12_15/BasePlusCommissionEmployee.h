#ifndef BASEPLUSCOMMISSIONEMPLOYEE_H_INCLUDED
#define BASEPLUSCOMMISSIONEMPLOYEE_H_INCLUDED
#include <iostream>
#include "CommissionEmployee.h"

using namespace std;

class BasePlusCommissionEmployee: public CommissionEmployee
{
public:
    BasePlusCommissionEmployee( const string &, const string &,
                const string & , double , double , double );

    void setSalary( double  );
    double getSalary();

    virtual void earnings();
    virtual void print();
private:
    double Salary;
};


#endif // BASEPLUSCOMMISSIONEMPLOYEE_H_INCLUDED
