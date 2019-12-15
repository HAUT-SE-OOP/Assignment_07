#include<iostream>
#include"Employee.h"
using namespace std;

Employee::Employee(string first,string last,string ssn):
    firstName(first),lastName(last),socialSecurityNumber(ssn)
    {

    }
void Employee::setFirstName(string first)
{
    firstName=first;
}
string Employee::getFirstName()
{
    return firstName;
}
void Employee::setLastName(string last)
{
    lastName=last;
}
string Employee::getLastName()
{
    return lastName;
}
void Employee::setSocialSecurityNumber(string ssn)
{
    socialSecurityNumber=ssn;
}
string Employee::getSocialSecurityNumber()
{
    return socialSecurityNumber;
}
void Employee::print()
{
    cout<<getFirstName()<<' '<<getLastName()<<"\nsocial security number:"<<getSocialSecurityNumber();
}
