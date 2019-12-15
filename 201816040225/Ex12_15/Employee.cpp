
#include <iostream>
using namespace std;

#include "Employee.h"

// constructor
Employee::Employee(
   const string &first, const string &last, const string &ssn)
   // initialize composed object
   :firstName(first),lastName(last),socialSecurityNumber(ssn)//initialize Employee data member
{

} // end  constructor

// set  employee's first name
void Employee::setFirstName( const string &first )
{

   firstName=first;

} // end function setFirstName

// return commission employee's first name
string Employee::getFirstName() const
{
    return firstName;

} // end function getFirstName

// set employee's last name
void Employee::setLastName( const string &last )
{
    lastName=last;
} // end function setLastName

// return  employee's last name
string Employee::getLastName() const
{
    return lastName;
} // end function getLastName

void Employee::setSocialSecurityNumber(
   const string &ssn )
{
   socialSecurityNumber=ssn;
} // end function setSocialSecurityNumber

// return  employee's social security number
string Employee::getSocialSecurityNumber() const
{
    return socialSecurityNumber;
} // end function getSocialSecurityNumber

// print Employee object
void Employee::print() const
{
   cout << getFirstName()<<' '<<getLastName()
   <<"\nsocial security number: "<<getSocialSecurityNumber();

} // end function print


