#include <iostream>
#include <stdexcept>
#include "BasepluscommissionEmployee.h"

using namespace std;

BasepluscommissionEmployee::BasepluscommissionEmployee(
   const string &F, const string &L, const string &SSn,
   double Gsale, double CR, double salary)

: CommissionEmployee( F,L,SSn,Gsale,CR)
{
   setBsalary( salary );
}

void BasepluscommissionEmployee::setBsalary(double salary)
{
        basesalary = salary;
}

double BasepluscommissionEmployee::getBsalary()
{
   return basesalary;
}


double BasepluscommissionEmployee::earnings()
{
   return getBsalary() + CommissionEmployee::earnings();
}

void BasePlusCommissionEmployee::print()
{
   cout << "based salary:";

CommissionEmployee::print();

   cout << "; base salary: " << getBsalary();
}
