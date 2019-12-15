//
//  SalariedEmployee.hpp
//  Ex12_15
//
//  Created by misonomayubw on 2019/12/15.
//  Copyright © 2019 misonomayubw. All rights reserved.
//

#ifndef SalariedEmployee_hpp
#define SalariedEmployee_hpp

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
   virtual void print() const; // print CommissionEmployee object
private:
   double weeklySalary; // salary pr week
}; // end class SalariedEmployee


#endif // SALARIEDEMPLOYEE_H_INCLUDED
