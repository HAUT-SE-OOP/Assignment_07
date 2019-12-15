#include <iostream>
#include "HourlyEmployee.h"
using namespace std;

HourlyEmployee::HourlyEmployee(string f,string l,string s,double w,double h)
:Employee(f,l,s)
{
    wage=w;
    hours=h;
}

double HourlyEmployee::getwage()
{
    return wage;
}

double HourlyEmployee::gethours()
{
    return hours;
}

double HourlyEmployee::earnings()
{
    if(hours<40||hours==40)
    {
        return wage*hours;
    }
    else
    {
        return wage*hours+(hours-40)*wage*0.2;
    }
}

void HourlyEmployee::print()
{
   Employee::print();
   cout<<"HourlyEmployees' salary: "<<earnings()<<endl;
}
