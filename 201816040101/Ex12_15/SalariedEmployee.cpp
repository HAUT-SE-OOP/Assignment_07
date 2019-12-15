#include "SalariedEmployee.h"
#include <stdexcept>
#include <iostream>
using namespace std;

SalariedEmployee::SalariedEmployee(string first ,string last ,string ss,double week)
         :Employee(first ,last ,ss)
{
    setWeeklySalary(week);
}
void SalariedEmployee::setWeeklySalary(double w)
{
    weeklySalary=w;
}
double SalariedEmployee::getWeeklySalary()
{
    return weeklySalary;
}
double SalariedEmployee::earnings()
{
    return weeklySalary;
}
void SalariedEmployee::print()
{
    Employee::print();
    cout<<"\nthe earnings is : "<<earnings();
}
