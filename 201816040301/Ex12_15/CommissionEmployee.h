// Lab 2: CommissionEmployee.h
// CommissionEmployee class definition represents a commission employee.
#ifndef COMMISSION_H
#define COMMISSION_H
#include"Employee.h"
#include <string> // C++ standard string class
using namespace std;

class CommissionEmployee:public Employee
{
public:
   CommissionEmployee(  string ,  string ,  string ,
      double = 0.0, double = 0.0 );
virtual ~CommissionEmployee(){}

   void setGrossSales( double ); // set gross sales amount
   double getGrossSales() const; // return gross sales amount

   void setCommissionRate( double ); // set commission rate (percentage)
   double getCommissionRate()const ; // return commission rate

 virtual  double earnings() const override; // calculate earnings
 virtual  void print() const override; // print CommissionEmployee object
private:

   double grossSales; // gross weekly sales
   double commissionRate; // commission percentage
}; // end class CommissionEmployee

#endif
