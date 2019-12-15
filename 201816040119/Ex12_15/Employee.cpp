#include <iostream>
using namespace std;

// BasePlusCommissionEmployee class definition
#include "Employee.h"

Employee::Employee(
   const string &first, const string &last, const string &ssn
    )
   : firstName(first),lastName(last),socialSecurityNumber(ssn)
{
} // end Employee constructor

// set commission employee's first name
void Employee::setFirstName( const string &first )
{
   firstName=first;/* Call commissionEmployee's setFirstName function */
} // end function setFirstName

// return commission employee's first name
string Employee::getFirstName() const
{
   return firstName;/* Call commissionEmployee's getFirstName function */
} // end function getFirstName

// set commission employee's last name
void Employee::setLastName( const string &last )
{
   lastName=last;
} // end function setLastName

// return commission employee's last name
string Employee::getLastName() const
{
   return lastName;/* Call commissionEmployee's getLastName function */
} // end function getLastName

// set commission employee's social security number
void Employee::setSocialSecurityNumber(
   const string &ssn )
{
   socialSecurityNumber=ssn;/* Call commissionEmployee's setSocialSecurity function */
} // end function setSocialSecurityNumber

// return commission employee's social security number
string Employee::getSocialSecurityNumber() const
{
   return socialSecurityNumber;/* Call commissionEmployee's getSocialSecurity function */
} // end function getSocialSecurityNumber

void Employee::print() const
{
   cout <<  getFirstName()<<' '<<getLastName()
   <<"\nsocial security number :"<<getSocialSecurityNumber();
} // end function print
