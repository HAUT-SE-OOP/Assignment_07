#include<iostream>
#include<stdexcept>
#include"SalariedEmployee.h"
using namespace std;

SalariedEmployee::SalariedEmployee(string first,string last,string ssn,double salary)
:Employee(first,last,ssn)
{
    setWeeklySalary(salary);
}
void SalariedEmployee::setWeeklySalary(double salary)
{
    if(salary>=0.0)
        weeklySalary=salary;
    else
        throw invalid_argument("weekly salary must be >=0.0");
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
    cout<<"Salaried employee:";
    Employee::print();
    cout<<"\nweekly salary:"<<getWeeklySalary();

}
