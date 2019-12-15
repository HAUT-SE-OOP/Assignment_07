#include<iostream>
#include "Employee.h"

using namespace std;

Employee::Employee(const string &F,const string &L,const string &SSn)
:Fname(F),Lname(L),SSn(SSn)
{

}

void Employee::setFname(const string &name)
{
    Fname=name;
}
string Employee::getFname()
{
    return Fname;
}

void Employee::setLname(const string &name)
{
    Lname=name;
}
string Employee::getLname()
{
    return Lname;
}

void Employee::setSSnumber(const string &number)
{
    SSnumber=number;
}
string Employee::getSSnumber()
{
    return SSnumber;
}

void string Employee::print()
{
    cout<getFname()<<" "<<getLname()<<" "<<"socal number:"<<getSSnumber();
}
