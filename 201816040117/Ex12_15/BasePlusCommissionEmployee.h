
#ifndef BASEPLUS_H
#define BASEPLUS_H

#include <string> // C++ standard string class
using namespace std;

#include "CommissionEmployee.h" // CommissionEmployee class definition

class BasePlusCommissionEmployee:public CommissionEmployee
{
public:
   BasePlusCommissionEmployee( string, string,
      string, double = 0.0, double = 0.0, double = 0.0 );

   void setBaseSalary( double ); // set base salary
   double getBaseSalary(); // return base salary

   virtual double earnings(); // calculate earnings
   virtual void print(); // print BasePlusCommissionEmployee object
private:
   double baseSalary; // base salary
}; // end class BasePlusCommissionEmployee

#endif



