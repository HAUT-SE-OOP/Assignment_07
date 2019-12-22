#include<iostream>
using namespace std;
#include"SalariedEmployee.h"
#include<stdexcept>
SalariedEmployee::SalariedEmployee(const string &first,const string &last,const string &ssn,double salary)
:Employee(first,last,ssn)
{
    setWeeklySalary(salary);

}
void SalariedEmployee::setWeeklySalary(double salary)
{
    if(salary>=0.0)
    WeeklySalary=salary;
    else
        throw invalid_argument("Weekly salary must be >=0.0");
}

double SalariedEmployee::getWeeklySalary()  const
{
    return WeeklySalary;
}

double SalariedEmployee::earnings()  const//calculate earnings
{
    return getWeeklySalary();
}

void  SalariedEmployee::print()  const
{
    cout<<"Salary Employee :";
    Employee::print();
    cout<<"\nweekly salary:"<<getWeeklySalary();

}
