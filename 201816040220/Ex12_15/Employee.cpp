#include <iostream>
#include "Employee.h"
using namespace std;

Employee::Employee(string first,string last,string ssn)
{
      setFirstName(first);
      setLastName(last);
      setSocialSecurityNumber(ssn);
}

void Employee::setFirstName(string first)
{
      firstName=first;
}

string Employee::getFirstName() const
{
    return firstName;
}

void Employee::setLastName(string last)
{
      lastName=last;
}

string Employee::getLastName() const
{
    return lastName;
}

void Employee::setSocialSecurityNumber(string ssn)
{
      socialSecurityNumber=ssn;
}

string Employee::getSocialSecurityNumber() const
{
    return socialSecurityNumber;
}

void Employee::print()
{
    cout<<getFirstName()<<" "<<getLastName()
     <<"\nsocial security number:"<<getSocialSecurityNumber();
}

