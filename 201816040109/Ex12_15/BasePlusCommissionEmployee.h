#ifndef BASEPLUS_H
#define BASEPLUS_H
#include <iostream>
using namespace std;
#include <string>
#include "CommissionEmployee.h"

class BasePlusCommissionEmployee : public CommissionEmployee
{
public:
   BasePlusCommissionEmployee(const string &, const string &, const string &, double = 0.0, double = 0.0, double = 0.0);
   virtual ~BasePlusCommissionEmployee() {} // virtual destructor

   void setBaseSalary(double);   // set base salary
   double getBaseSalary() const; // return base salary

   // keyword virtual signals intent to override
   virtual double earnings() const override; // calculate earnings
   virtual void print() const override;      // print object
private:
   double baseSalary; // base salary per week
};                    // end class BasePlusCommissionEmployee

#endif // BASEPLUS_H
