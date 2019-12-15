#ifndef SALARIED_H
#define SALARIED_H
#include <iostream>
using namespace std;
#include <string>
#include "Employee.h"

class SalariedEmployee : public Employee
{
public:
   SalariedEmployee(const string &, const string &, const string &, double = 0.0);
   virtual ~SalariedEmployee() {} // virtual destructor

   void setWeeklySalary(double);   // set weekly salary
   double getWeeklySalary() const; // return weekly salary

   // keyword virtual signals intent to override
   virtual double earnings() const override; // calculate earnings
   virtual void print() const override;      // print object
private:
   double weeklySalary; // salary per week
};                      // end class SalariedEmployee

#endif // SALARIED_H