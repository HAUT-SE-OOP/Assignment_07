#include <iostream>
#include <stdexcept>
#include "HourlyEmployee.h"

using namespace std;


HourlyEmployee::HourlyEmployee( const string &F,
    const string &L, const string &SSn,
    double WG, double H)
    : Employee( F,L,SSn )
{
   setWage(WG);
   setHours(H);
}

void HourlyEmployee::setWage( double WG)
{
  wage=WG;
}


double HourlyEmployee::getWage()
{
   return wage;
}

void HourlyEmployee::sethour( double H )
{
  hours=H
}

double HourlyEmployee::gethour()
{
   return hours;
}
void HourlyEmployee::print()
{
   cout << "HourlyEmployee employee: ";
   Employee::print();
   cout << "\nwage: " << getwage()
      << " hours: " << gethour();
}

double HourlyEmployee::earnings()
{
   if( gethour()>40 )
        return 40 * getwage() + ( gethour() - 40 ) * 1.5 * getwage();

   else
        return gethour() * getwage();
}
