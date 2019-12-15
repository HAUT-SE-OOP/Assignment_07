#include<bits/stdc++.h>
#include"SalariedEmployee.h"
using namespace std;
SalariedEmployee::SalariedEmployee(string first,string last,string ssn,double salary)
:Employee(first,last,ssn)
{
    setweeklysalary(salary);
}
void SalariedEmployee::setweeklysalary(double shif)
{
    shif>=0.0?(weeklysalary=shif):0;
}

double SalariedEmployee::getweeklysalary()const
{
    return weeklysalary;
}
double SalariedEmployee::earnings()const
{
    return getweeklysalary();
}
void SalariedEmployee::print()const
{
    cout<<"Salaried employee: ";
    Employee::print();
    cout<<"\nweekly salary: "<<getweeklysalary();
}

