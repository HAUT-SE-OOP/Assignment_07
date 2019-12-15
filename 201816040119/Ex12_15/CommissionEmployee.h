// Lab 2: CommissionEmployee.h
// CommissionEmployee class definition represents a commission employee.
#ifndef COMMISSION_H
#define COMMISSION_H
#include"Employee.h"
#include <string> // C++ standard string class
using namespace std;

class CommissionEmployee:public Employee
{
public:
   CommissionEmployee( const std::string &, const std::string &, const std::string &,
      double = 0.0, double = 0.0 );
  virtual ~CommissionEmployee(){};
   void setCommissionRate( double); // set first name
   double getCommissionRate() const; // return first name

   void setGrossSales( double ); // set last name
   double getGrossSales() const; // return last name

   virtual double earning()const ;
    virtual void print()const;
private:
   double grossSales; // gross weekly sales
   double commissionRate; // commission percentage
}; // end class CommissionEmployee

#endif


/**************************************************************************
 * (C) Copyright 1992-2012 by Deitel & Associates, Inc. and               *
 * Pearson Education, Inc. All Rights Reserved.                           *
 *                                                                        *
 * DISCLAIMER: The authors and publisher of this book have used their     *
 * best efforts in preparing the book. These efforts include the          *
 * development, research, and testing of the theories and programs        *
 * to determine their effectiveness. The authors and publisher make       *
 * no warranty of any kind, expressed or implied, with regard to these    *
 * programs or to the documentation contained in these books. The authors *
 * and publisher shall not be liable in any event for incidental or       *
 * consequential damages in connection with, or arising out of, the       *
 * furnishing, performance, or use of these programs.                     *
 **************************************************************************/
