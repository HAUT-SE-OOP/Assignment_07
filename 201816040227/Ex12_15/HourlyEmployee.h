#ifndef HOURLYEMPLOYEE_H_INCLUDED
#define HOURLYEMPLOYEE_H_INCLUDED
#include <string> // C++ standard string class
#include "Employee.h" // Employee class definition

class HourlyEmployee : public Employee
{
public:
   HourlyEmployee( const std::string &, const std::string &,
      const std::string &, double = 0.0, double = 0.0, double= 0.0);
   virtual ~HourlyEmployee() { } // virtual destructor

   void setHourlyWage( double ); // set hourlyWage
   double getHourlyWage() const; // return hourlyWage

   void setHours(double ); // set hours
   double getHours() const; // return hours

   void setSalary( double ); // set salary
   double getSalary() const; // returnsalary

   // keyword virtual signals intent to override
   virtual double earnings() const override; // calculate earnings
   virtual void print() const override; // print object
private:
   double hourlyWage; 
   double hours; 
   double salary;
}; // end class HourlyEmployee


#endif // HOURLYEMPLOYEE_H_INCLUDED
