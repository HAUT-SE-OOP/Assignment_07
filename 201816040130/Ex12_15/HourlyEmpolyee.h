#ifndef HOURLYEMPLOYEE_H
#define HOURLYEMPLOYEE_H
#include "Employee.h"
#include <string>
using namespace std;

class HourlyEmployee:public Employee //definition of class HourlyEmployee
{
public:
    HourlyEmployee(const string &,const string &,const string &,double,double); //declare function for constructor of HourlyEmployee
   virtual double earnings(); //declare function to earnings
private:
    double wage; //declare data member wage
    double hours; //declare data member hours

};
#endif // HOURLYEMPLOYEE_H
