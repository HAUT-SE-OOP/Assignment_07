#include <iostream>
#include "Employee.h"

using namespace std;

Employee::Employee( const string &first, const string &last,
                   const string &ssn )
        :FirstName( first ),LastName( last ), SocialSecurityNumber( ssn )
        {
        }

void Employee::setFirstName( const string & first )
{
    FirstName = first;
}

string Employee::getFirstName() const
{
    return FirstName;
}

void Employee::setLastName( const string & last )
{
    LastName = last;
}

string Employee::getLastName() const
{
    return LastName;
}

void Employee::setSocialSecurityNumber( const string & ssn )
{
    SocialSecurityNumber = ssn;
}

string Employee::getSocialSecurityNumber() const
{
    return SocialSecurityNumber;
}

void Employee::print()
{
    cout << getFirstName() << ' ' << getLastName()
    << "\nSocial security number: " << getSocialSecurityNumber();
}
