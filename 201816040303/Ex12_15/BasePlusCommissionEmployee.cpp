#include <iostream>
using namespace std;

#include "BasePlusCommissionEmployee.h"

BasePlusCommissionEmployee::BasePlusCommissionEmployee(
   const string &first, const string &last, const string &ssn,
   double sales, double rate, double salary )
   :
	    CommissionEmployee(first,last,ssn,sales, rate)
{
   setBaseSalary( salary );
}

void BasePlusCommissionEmployee::setFirstName( const string &first )
{
   firstName = first;
}

string BasePlusCommissionEmployee::getFirstName() const
{
   return CommissionEmployee::getFirstName();
}

void BasePlusCommissionEmployee::setLastName( const string &last )
{
   CommissionEmployee::setLastName(last);
}

string BasePlusCommissionEmployee::getLastName() const
{
   return CommissionEmployee::getLastName();
}

void BasePlusCommissionEmployee::setSocialSecurityNumber(
   const string &ssn )
{
   CommissionEmployee::setSocialSecurityNumber(ssn);
}

string BasePlusCommissionEmployee::getSocialSecurityNumber() const
{
   return CommissionEmployee::getSocialSecurityNumber();
}

void BasePlusCommissionEmployee::setGrossSales( double sales )
{
   CommissionEmployee::setGrossSales(sales);
}

double BasePlusCommissionEmployee::getGrossSales() const
{
   return CommissionEmployee::getGrossSales();
}

void BasePlusCommissionEmployee::setCommissionRate( double rate )
{
   CommissionEmployee::setCommissionRate(rate);
}

double BasePlusCommissionEmployee::getCommissionRate() const
{
   return CommissionEmployee::getCommissionRate();
}

void BasePlusCommissionEmployee::setBaseSalary( double salary )
{
   baseSalary = ( salary < 0.0 ) ? 0.0 : salary;
}

double BasePlusCommissionEmployee::getBaseSalary() const
{
   return baseSalary;
}

double BasePlusCommissionEmployee::earnings() const
{
   return baseSalary+CommissionEmployee::earnings();
}

void BasePlusCommissionEmployee::print() const
{
   CommissionEmployee::print();
   cout << "\n"<<"base salary "<<baseSalary;
}
