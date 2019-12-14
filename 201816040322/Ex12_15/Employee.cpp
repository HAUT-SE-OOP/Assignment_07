// Assignment_07: Employee.cpp
// Employee class member-function definitions.
#include <iostream>
using namespace std;

#include "Employee.h"

// constructor
Employee::Employee( const string & Fname, const string & Lname,const string & SSN )
        : FirstName(Fname), LastName(Lname), socialSecurityNumber( SSN )
{
    // empty body
}// end Employee constructor

// set first name
void Employee::setFirstName(const string &name)
{
    FirstName = name;
}// end function setFirstName

// return first name
string Employee::getFirstName() const
{
    return FirstName;
}
//  getFirstName

// set last name
void Employee::setLastName(const string &name)
{
    LastName = name;
}
// end function setLastName

//  last name
string Employee::getLastName() const
{
    return LastName;
}
// end function getLastName

// set social security number
void Employee::setSocialSecurityNumber(const string &ssn)
{
    socialSecurityNumber = ssn;
}
// end function setSocialSecurityNumber

// return social security number
string Employee::getSocialSecurityNumber() const
{
    return socialSecurityNumber;
}
// end function getSocialSecurityNumber

// print Employee's information
void Employee::print() const
{
    cout << getFirstName() << " " << getLastName()
         << "\nsocial security number: " << getSocialSecurityNumber();
}
// end function print
