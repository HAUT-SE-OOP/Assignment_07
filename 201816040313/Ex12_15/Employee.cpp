#include <iostream>
#include "Employee.h"
using namespace std;


Employee::Employee(const string &first, const string &last, const string &ssn )//constructor
:firstName(first),lastName(last),socialSecurityNumber(ssn)
{

}
// set first name
void Employee::setFirstName( const string &first )
{
   firstName = first;
}
// return first name
string Employee::getFirstName() const
{
   return firstName;
}

// set last name
void Employee::setLastName( const string &last )
{
   lastName = last;
}

// return last name
string Employee::getLastName() const
{
   return lastName;
}

// set social security number
void Employee::setSocialSecurityNumber( const string &ssn )
{
   socialSecurityNumber = ssn;
}

// return social security number
string Employee::getSocialSecurityNumber() const
{
   return socialSecurityNumber;
}

// print worker information
void Employee::print() const
{
   cout << "commission employee: " << firstName << ' ' << lastName
      << "\nsocial security number: " << socialSecurityNumber;
   cout <<endl;
}
