// CommissionEmployee.h
// CommissionEmployee class definition represents a commission employee.
#ifndef COMMISSION_H
#define COMMISSION_H
#include "Employee.h"
#include <string> // C++ standard string class
using namespace std;

class CommissionEmployee:public Employee
{
public:
   CommissionEmployee( const string &, const string &, const string &,
      double = 0.0, double = 0.0 );
   virtual ~CommissionEmployee(){}

   void setCommissionRate( double ); // set commission rate (percentage)
   double getCommissionRate() const; // return commission rate
   void setGrossSales(double);
   double getGrossSales()const;

   virtual double earnings()const; // calculate earnings
   virtual void print(); // print CommissionEmployee object
private:
   double grossSales; // gross weekly sales
   double commissionRate; // commission percentage
}; // end class CommissionEmployee

#endif
