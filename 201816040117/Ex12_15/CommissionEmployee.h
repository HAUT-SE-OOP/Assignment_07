
#ifndef COMMISSION_H
#define COMMISSION_H

#include <string> // C++ standard string class
#include "Employee.h"
using namespace std;

class CommissionEmployee:public Employee
{
public:
   CommissionEmployee( string,string , string,
      double = 0.0, double = 0.0 );
   void setGrossSales( double ); // set gross sales amount
   double getGrossSales(); // return gross sales amount

   void setCommissionRate( double ); // set commission rate (percentage)
   double getCommissionRate(); // return commission rate

   virtual double earnings(); // calculate earnings
   virtual void print(); // print CommissionEmployee object
private:
   double grossSales; // gross weekly sales
   double commissionRate; // commission percentage
}; // end class CommissionEmployee

#endif



