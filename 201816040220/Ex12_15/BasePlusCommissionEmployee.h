#ifndef BASEPLUS_H
#define BASEPLUS_H
#include <string>
#include "CommissionEmployee.h"
using namespace std;

class BasePlusCommissionEmployee : public CommissionEmployee
{
public :
    BasePlusCommissionEmployee(string , string ,string ,double =0.0 ,double =0.0,double =0.0);
    virtual ~BasePlusCommissionEmployee() {}

    void setBaseSalary(double );
    double getBaseSalary( );

   virtual double earnings( );
   virtual void print();
private:
    double baseSalary;
};
#endif
