#ifndef BASEPLUSCOMMISSIONEMPLOYEE_H_INCLUDED
#define BASEPLUSCOMMISSIONEMPLOYEE_H_INCLUDED

#include <string>
using namespace std;

#include "CommissionEmployee.h"

class BasePlusCommissionEmployee:public CommissionEmployee
{
public:
   BasePlusCommissionEmployee( const string &, const string &,
      const string &, double = 0.0, double = 0.0, double = 0.0 );

   void setFirstName( const string & );
   string getFirstName() const;

   void setLastName( const string & );
   string getLastName() const;
   void setSocialSecurityNumber( const string & );
   string getSocialSecurityNumber() const;

   void setGrossSales( double );
   double getGrossSales() const;

   void setCommissionRate( double );
   double getCommissionRate() const;

   void setBaseSalary( double );
   double getBaseSalary() const;

   double earnings() const;
   void print() const;
private:
   double baseSalary;
      string firstName;
      string lastName;
      string socialSecurityNumber;
      double grossSales;
      double commissionRate;
};

#endif // BASEPLUSCOMMISSIONEMPLOYEE_H_INCLUDED
