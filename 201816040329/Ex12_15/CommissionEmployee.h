#ifndef COMMISSIONEMPLOYEE_H_INCLUDED
#define COMMISSIONEMPLOYEE_H_INCLUDED

#include<string>
#include"Employee.h"
using namespace std;

class CommissionEmployee
{
public:
    CommissionEmployee(const string &, const string &, const string &,
      double = 0.0, double = 0.0);

   void setGsales(double);
   double getGsales();

   void setcomrate(double);
   double getcomrate();

   virtual void print();
   virtual double earings();
private:
   double sales;
   double rate;

};
