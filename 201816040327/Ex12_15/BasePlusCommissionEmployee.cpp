//
//  BasePlusCommissionEmployee.cpp
//  Ex12_15
//
//  Created by misonomayubw on 2019/12/15.
//  Copyright © 2019 misonomayubw. All rights reserved.
//

#include "BasePlusCommissionEmployee.hpp"
// using composition.
#include <iostream>
#include <stdexcept>
// BasePlusCommissionEmployee class definition

#include "CommissionEmployee.hpp"
using namespace std;

BasePlusCommissionEmployee::BasePlusCommissionEmployee(
   const string &first, const string &last, const string &ssn,
   double sales, double rate, double salary )
   // initialize composed object
   :CommissionEmployee(first,last,ssn,sales,rate)
{
   setBaseSalary( salary ); // validate and store base salary
} // end BasePlusCommissionEmployee constructor

// set base salary
void BasePlusCommissionEmployee::setBaseSalary( double salary )
{
   baseSalary = ( salary < 0.0 ) ? 0.0 : salary;
} // end function setBaseSalary

// return base salary
double BasePlusCommissionEmployee::getBaseSalary() const
{
   return baseSalary;
} // end function getBaseSalary

// calculate earnings
double BasePlusCommissionEmployee::earnings() const
{
   return getBaseSalary() + CommissionEmployee::earnings();
      /* Call commissionEmployee's earnings function */
} // end function earnings

// print BasePlusCommissionEmployee object
void BasePlusCommissionEmployee::print()
{
   cout << "base-salaried ";
   CommissionEmployee::print();
   cout << "\nbase salary: " << getBaseSalary();
} // end function print
