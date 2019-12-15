
#ifndef SALARIEDEMPLOYEE_H
#define SALARIEDEMPLOYEE_H

#include <string> // C++ standard string class
#include"Employee.h"

class SalariedEmployee:public Employee
{
public:
   SalariedEmployee( const std::string &, const std::string &, const std::string &,
       double = 0.0 );
       virtual ~SalariedEmployee(){}
       void setWeeklySalary(double);//set weekly salary
       double getWeeklySalary()const;//get function
       virtual double earnings()const override;//earing
       virtual void print()const override;//message
private:
      double weeklySalary;
}; // end class

#endif

