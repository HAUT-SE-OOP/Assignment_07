#ifndef BASEPLUSCOMMISSIONEMPLOYEE_H_INCLUDED
#define BASEPLUSCOMMISSIONEMPLOYEE_H_INCLUDED


#include <string>
#include "CommissionEmployee.h"

class BasepluscommissionEmployee: public CommissionEmployee
{
public:
  BasepluscommissionEmployee( const string &, const string &,
      const string &, double = 0.0, double = 0.0, double = 0.0 );

   void setBsalary( double );
   double getBsalary();

   virtual double earnings();
   virtual void print();
private:

   double basesalary;
};

#endif // BASEPLUSCOMMISSIONEMPLOYEE_H_INCLUDED
