#include <iostream>
#include "Employee.h"
using namespace std;

Employee::Employee( const string &first, const string &last
    cosnt string &ssn )
    :firstName( first ),lastName( last ),socialSecurityNumber( ssn )
{

}//end Employee constructor

//set first name
void Employee::setFirstName( const string &first )
{
    firstname = first;
}//end function setFirstName

//return first name
string Employee::getFirstName()
{
    return firstName;
}//end funtion getFirstName

//set last name
void Employee::setLastName( const string &last )
{
    lastName = last;
}//end function setLastName

//return last name
string Employee::getLastName()
{
    return lastName;
}//end function getLastName

void Employee::setSocialSecurityNumber( const string &ssn )
{
    socialSecurityNumber = ssn;
}

string Employee::getSocialSecurityNunber() const
{
    return socialSecurityNumber;
}

void Employee::print() const
{
    cout << getFirstName() << ' ' << getLastName()
         << "\nsocial security number: " << getSocialSecurityNumber();
}
