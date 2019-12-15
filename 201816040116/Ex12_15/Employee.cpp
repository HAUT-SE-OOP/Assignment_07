#include<iostream>
#include"Employee.h"
#include<string.h>
using namespace std;
Employee::Employee(string f,string l,string s)
{
    setFirstName(f);
    setLastName(l);
    setSocialSecurityNumber(s);
}
void Employee::setFirstName(string f)
{
    firstname=f;
}
string Employee::getFirstName()
{
    return firstname;
}
void Employee::setLastName(string l)
{
    lastname=l;
}
string Employee::getLastName()
{
    return lastname;
}
void Employee::setSocialSecurityNumber(string s)
{
    socialsecuritynumber=s;
}
string Employee::getSocialSecurityNumber()
{
    return socialsecuritynumber;
}
void Employee::print()
{
    cout<<getFirstName()<<" "<<getLastName()<<" "<<getSocialSecurityNumber()<<"\n";
}
