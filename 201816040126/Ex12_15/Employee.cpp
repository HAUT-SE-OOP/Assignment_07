#include <iostream>
#include "Employee.h"

using namespace std;

Employee::Employee( const string &first, const string &last,
                   const string &ssn )
        :FirstName( first ),LastName( last ), SocialSecourityNumber( ssn )
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

void Employee::setSocialSecourityNumber( const string & ssn )
{
    SocialSecourityNumber = ssn;
}

string Employee::getSocialSecourityNumber() const
{
    return SocialSecourityNumber;
}
