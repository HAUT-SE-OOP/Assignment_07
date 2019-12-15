#include<stdexcept>
#include <iostream>
using namespace std;

#include "SalariedEmployee.h" //  class definition

// constructor
SalariedEmployee::SalariedEmployee(
   const string &first, const string &last, const string &ssn,double salary )
   :Employee(first,last,ssn)
{
   setWeeklySalary(salary);
} // end  constructor

void SalariedEmployee::setWeeklySalary(double salary)//set weekly salary
{
    if(salary>=0.0)
        weeklySalary=salary;
    else
        throw invalid_argument("weeklySalary must be>=0.0");
}

double SalariedEmployee::getWeeklySalary()const//get weekly salary
{
    return weeklySalary;
}
double SalariedEmployee::earnings()const//earning function
{
    return getWeeklySalary();
}
void SalariedEmployee::print()const//print message
{
    cout<<"salaried employee:";
    Employee::print();
    cout<<"\nweekly salary: "<<getWeeklySalary();
}
