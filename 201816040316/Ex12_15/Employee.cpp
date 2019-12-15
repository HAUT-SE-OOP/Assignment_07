#include<iostream>
#include"Employee.h"
using namespace std;

Employee::Employee(const string, &first, const string, &last, const string &ssn):firstname(first), lastname(last), socialSecurityNumber(ssn)
{

}

void Employee::setFirstname(const string, &first)
{
    firstName = first;

}

string Employee::getFirstname()const
{
    return firstName;
}

void Employee::setLastname(const string, &last)
{
    lastName = last;

}

string Employee::getLastname()const
{
    return lastName;
}

void Employee::setSocialSecurityNumber(const string, &ssn)
{
    socialSecurityNumber = ssn;

}

string Employee::getSocialSecurityNumber()const
{
    return socialSecurityNumber;
}
void Employee::print()const
{
    cout<<getFirstname()<<''<<getLastname()<<"\nsocial security number:"<<getSocialSecurityNumber();

}
