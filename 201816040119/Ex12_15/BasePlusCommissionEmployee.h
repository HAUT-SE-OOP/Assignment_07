// Lab 2: CommissionEmployee.h
// CommissionEmployee class definition represents a commission employee.
#include"CommissionEmployee.h"
#include <iostream>
#include <string> // C++ standard string class
using namespace std;

class BasePlusCommissionEmployee:public CommissionEmployee
{
public:
   BasePlusCommissionEmployee( const std::string &, const std::string &, const std::string &,
      double = 0.0, double = 0.0 ,double=0.0);
  virtual ~BasePlusCommissionEmployee(){};
   void setBaseSalary( double); // set first name
   double getBaseSalary() const; // return first name
   virtual double earning()const ;
   virtual void print()const ;
private:
   double baseSalary;
}; // end class CommissionEmployee

