#include <iostream>
#include "Employee.h"

using namespace std;

/*initializing the firstname, lastname, socialSecurityNumber */
Employee::Employee(const string &first, const string &last, const string &ssn)
    :firstname(first), lastname(last), socialSecurityNumber(ssn)
    {

    }
/* set and get the lastname, firstname, socialSecurityNumber*/
void Employee::setFirstname(const string &first)
{
    firstname=first;
}
string Employee::getFirstname() const
{
    return firstname;
}
void Employee::setLastname(const string &last)
{
    lastname=last;
}
string Employee::getLastname() const
{
    return lastname;
}
void Employee::setSocialSecurityNumber(const string &ssn)
{
    socialSecurityNumber=ssn;
}
string Employee::getSocialSecurityNumber() const
{
    return socialSecurityNumber;
}
/*print is a virtual function and define it*/
void Employee::print() const
{
    cout << getFirstname() << ' ' << getLastname()
        << "\nsocial security number: " << getSocialSecurityNumber();
}
