#include <iostream>
#include <stdexcept>
#include "CommissionEmployee.h"
using namespace std;


CommissionEmployee::CommissionEmployee( const string &F,
    const string &L, const string &SSn,
    double Gsale, double CR)
    : Employee(F,L,SSn)
{
   setGrossSales(Gsales);
   setCommissionRate(CR);
}


void CommissionEmployee::setGsales( double S)
{
       sales=S;
}

double CommissionEmployee::getGsales()
{
   return sales
}

void CommissionEmployee::setcomrate( double R )
{
  rate=R;
}

// return commission rate
double CommissionEmployee::getcomrate()
{
   return rate;
}

double CommissionEmployee::earnings()
{
   return getcomrate() * getGsales();
}

void CommissionEmployee::print()
{
   cout << "commission employee: ";
   Employee::print();
   cout << "\ngross sales: " << getGsales()
      << "; commission rate: " << getcomrate();
}
