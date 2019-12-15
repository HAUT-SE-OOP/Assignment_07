#include <iostream>
#include <stdexcept>
#include "HourlyEmployee.h"
using namespace std;

HourlyEmployee::HourlyEmployee( const string &first,const string &last, const string &ssn,double wages, double hour ): Employee( first, last, ssn )
{
   setWage( wages );
   setHours( hour );
}

void HourlyEmployee::setWage( double wages )
{
   if( wages >= 0 )
        wage = wages;
   else
        cout<<"error";
}
double HourlyEmployee::getWage()
{
   return wage;
}
void HourlyEmployee::setHours( double hour )
{
   if( hour >= 0 )
        hours = hour;
   else
         cout<<"error";
}
double HourlyEmployee::getHours()
{
   return hours;
}
double HourlyEmployee::earnings()
{
   if( getHours() <= 40.0 )
   {
          return getHours() * getWage();
   }
   else
     {
          return 40 * getWage() + ( getHours() - 40 ) * 1.5 * getWage();
     }
}
void HourlyEmployee::print()
{
    Employee::print();
    cout << "thr wage is: " << getWage()<<endl;
    cout<< "the hours is: " << getHours()<<endl;
}
