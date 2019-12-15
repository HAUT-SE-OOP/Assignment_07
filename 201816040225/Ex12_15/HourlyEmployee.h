
#ifndef HOURLYEMPLOYEE_H
#define HOURLYEMPLOYEE_H

#include <string> // C++ standard string class
#include"Employee.h"

class HourlyEmployee:public Employee
{
public:
   HourlyEmployee( const string &, const string &, const string &,
      double = 0.0, double = 0.0 );
      virtual ~HourlyEmployee(){}
      void setHour(double);//set hour
      double getHour()const;//get hour
      void setWage(double);//set wage
      double getWage()const;//get wage
   virtual double earnings()const override; // calculate earnings
   virtual void print() const override; // print  object
private:
   double wage;
   double hour;
}; // end class

#endif

