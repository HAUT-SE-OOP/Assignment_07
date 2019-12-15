#include <iostream>
using namespace std;
#include"Employee.h"

Employee::Employee(const string &first, const string &last, const string &ssn)
:firstName(first),lastName(last),socialSecurityNumber(ssn)
{

}
void Employee::setFirstName( const string &first )
{
   firstName = first; // should validate
} // end function setFirstName

// return first name
string Employee::getFirstName() const
{
   return firstName;
} // end function getFirstName

// set last name
void Employee::setLastName( const string &last )
{
   lastName = last; // should validate
} // end function setLastName

// return last name
string Employee::getLastName() const
{
   return lastName;
} // end function getLastName

// set social security number
void Employee::setSocialSecurityNumber( const string &ssn )
{
   socialSecurityNumber = ssn; // should validate
} // end function setSocialSecurityNumber

// return social security number
string Employee::getSocialSecurityNumber() const
{
   return socialSecurityNumber;
} // end function getSocialSecurityNumber

// print Employee object
void Employee::print() const
{
    cout<<getFirstName()<<' '<<getLastName()<<"\nsocial security number:"<<getSocialSecurityNumber();
}
