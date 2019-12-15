#ifndef COMMISSIONEMPLOYEE_H_INCLUDED
#define COMMISSIONEMPLOYEE_H_INCLUDED
#include <string>
#include"Employee.h"

class CommissionEmployee: public Employee
public:
   CommissionEmployee(const string&, const string&, const string &, double, double);
   virtual ~ CommissionEmployee(){}

   void setCommissionRate( double );
   double getCommissionRate() const;

   void setGrosssales( double );
   double getGrossSales() const;

   virtual double earnings() const override;
   virtual void print()const override;
private:
  double grossSales;
  double CommissionRate;
{
};


#endif // COMMISSIONEMPLOYEE_H_INCLUDED
