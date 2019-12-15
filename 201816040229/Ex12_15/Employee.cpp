 //Employee.cpp
#include <iostream>
#include "Employee.h"// Employee class definition
using namespace std;
// constructor
Employee::Employee( const string &first ,const string &last,const string &ssn )
:firstName(first),  lastName( last ), socia1SecurityNumber( ssn )
{
    // empty body
}// end Employee constructor
 //set first name
void Employee::setFirstName( const string &first )
{
    firstName = first;
}
// end function setFirstName
// return first name
string Employee::getFirstName()const
{
    return firstName;
}// end function getFirstName
// set last name const string &last )
void Employee::setLastName(const string &last)
{
   lastName = last;
}
// end function setLastName
// return last name
string Employee::getLastName() const
{
   return lastName;
}

// end function getLastName
// set socialsecurity number
void Employee::setSocia1SecurityNumber(const string &ssn )
{
    socia1SecurityNumber = ssn;
} // end function setSocialSecurityNumber
// return social security number
string Employee::getSocialSecurityNumber() const
{
   return socia1SecurityNumber;
}
// end function getSocialSecurityNumber
// print Employee's information (virtual, but not pure virtual)
void Employee::print() const
{

    cout << getFirstName() << getLastName()
     << "\nsocial security number:"<< getSocialSecurityNumber();
}// end function print

