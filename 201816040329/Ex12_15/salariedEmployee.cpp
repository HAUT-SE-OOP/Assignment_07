#include<iostream>
#include"salariedEmployee.h"

using namespace std;

salariedEmployee::salariedEmployee(const string &F,const string &L,const string &SSn,double salary)
:Employee(F,L,SSn)
{

}

void salariedEmployee::setWsalary(double salary)
{
    weeksalary=salary;
}

double salariedEmployee::getWsalary()
{
    return weeksalary;
}

void salariedEmployee::print()
{
    cout<<"salaried employee:";
    Employee:print();
    cout<<"/n/n"<<"week salary"<<getWsalary();
}
