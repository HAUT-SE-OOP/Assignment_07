#include<iostream>
#include"Employee.h"
#include<string.h>
using namespace std;
#include"SalariedEmployee.h"
#include<stdexcept>
SalariedEmployee::SalariedEmployee(string f,string l,string s,double y)
                                    :Employee(f,l,s)
{
    setweeklySalary(y);
}
void SalariedEmployee::setweeklySalary(double y)
{
    if(y>=0.0)
        weeklySalary=y;
    else
        throw invalid_argument("weekly salary must be>=0.0");
}
double SalariedEmployee::getweeklySalary()
{
    return weeklySalary;
}

double SalariedEmployee::earnings()
{
    return getweeklySalary();
}
void SalariedEmployee::print()
{
    cout<<"salaried employee:";
    Employee::print();
    cout<<"\nweekly salary:"<<getweeklySalary();
}
