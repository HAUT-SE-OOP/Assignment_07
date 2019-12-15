#ifndef SALARIEDEMPLOYEE_H_INCLUDED
#define SALARIEDEMPLOYEE_H_INCLUDED

#include <string> // C++ standard string class
#include "Employee.h"
using namespace std;

class SalariedEmployee:public Employee
{
public:
   SalariedEmployee( const string &, const string &, const string &,
      double = 0.0 );
   virtual ~SalariedEmployee(){}

   void setWeeklySalary( double ); // set WeeklySalary
   double getWeeklySalary() const; // return WeeklySalary

   virtual double earnings() const override; // calculate earnings
   virtual void print(); // print CommissionEmployee object
private:
   double weeklySalary; // salary pr week
}; // end class SalariedEmployee


#endif // SALARIEDEMPLOYEE_H_INCLUDED
