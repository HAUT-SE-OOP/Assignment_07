#include"SalariedEmployee.h"
#include<iostream>

SalariedEmployee::SalariedEmployee(string f,string l,string s,double w)
:Employee(f,l,s)
{
    setWeeklySalary(w);

}
void SalariedEmployee::setWeeklySalary(double w)
{
    weeklySalary=(w>0)?w:0;
}
double SalariedEmployee::getWeeklySalary()
{
    return weeklySalary;
}
double SalariedEmployee::earnings()
{
    return getWeeklySalary();
}
void SalariedEmployee::print()
{
    cout<<"salaried employee:";
    Employee::print();
    cout<<"\nweekly salary :"<<getWeeklySalary();
}
