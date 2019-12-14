#include <iostream>
#include "Employee.h"//Employee class definition
using namespace std;

//constructor
Employee::Employee( const string &first, const string &last,
                    const string &ssn)
                    :firstName( first ),lastName( last ),socialSecurityNumber( ssn )
{
    //empty body
}//end Employee constructor

void Employee::setFirstName( const string &first)
{
    firstName = first;
}//end function setFirstName
string Employee::getFirstName() const
{
    return firstName;
}//end function getFirstName

void Employee::setLastName( const string &last)
{
    lastName = last;
}//end function setLastName
string Employee::getLastName() const
{
    return lastName;
}//end function getLastName

void Employee::setSocialSecurityNumber( const string &ssn)
{
    socialSecurityNumber = ssn;
}//end function setSocialSecurityNumber
string Employee::getSocialSecurityNumber() const
{
    return socialSecurityNumber;
}//end function getSocialSecurityNumber

void Employee::print() const
{
    cout<< getFirstName()<<" "<<getLastName()
        << "\nsocial security number:  "<<getSocialSecurityNumber();
}//end function print

