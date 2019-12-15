#include <iostream>
using namespace std;

#include"Employee.h"

Employee::Employee(string f,string l,string s)
{
    setFirstName(f);
    setLastName(l);
    setSocialSecurityNumber(s);
}
void Employee::setFirstName(string f)
{
    firstName=f;
}
string Employee::getFirstName()
{
    return firstName;
}
void Employee::setLastName(string l)
{
    lastName=l;
}
string Employee::getLastName()
{
    return lastName;
}
void Employee::setSocialSecurityNumber(string s)
{
    socialSecurityNumber=s;
}
string Employee::getSocialSecurityNumber()
{
    return socialSecurityNumber;
}
void Employee::print()
{
    cout<<getFirstName()<<' '<<getLastName()
    <<"\nsocial security number:"<<getSocialSecurityNumber();
}


