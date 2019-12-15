#ifndef HOURLYWORKER_H_INCLUDED
#define HOURLYWORKER_H_INCLUDED
#include "Employee.h"
#include <string> // C++ standard string class
using namespace std;

class HourlyWorker:public Employee
{
public:
   HourlyWorker( const string &, const string &, const string &,
      double = 0.0, double = 0.0 );
   virtual ~HourlyWorker(){}

   void setWage( double ); // set Wage
   double getWage() const; // return Wage
   void setHours(double);
   double getHours()const;

   virtual double earnings()const; // calculate earnings
   virtual void print(); // print HourlyWorker
private:
   double Wage; // Wage
   double Hours; // hours
}; // end class HourlyWorker

#endif // HOURLYWORKER_H_INCLUDED
