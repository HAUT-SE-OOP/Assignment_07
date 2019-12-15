//Employee .cpp
//Abstract base class Employee member function definitions
#include <iostream>
#include "Employee.h"

using namespace std;

//constructor
Employee::Employee(const string &first,const string &last,const string &ssn)
    : firstName(first),lastName(last),socialSecurityNumber(ssn)
{
    //empty body
}//end function Employee constructor

//set first name
void Employee::setFirstName(const string &first)
{
    firstName = first;//store name
}//end function set first name

//retrieve first name
string Employee::getFirstName()const
{
    return firstName;
}//end function retrieve first name

//set last name
void Employee::setLastName(const string &last)
{
    lastName = last;//store last name
}//end function set last name

//retrieve last name
string Employee::getLastName() const
{
    return lastName;
}//end function retrieve last name

//set ssn
void Employee::setSocialSecurityNumber(const string &ssn)
{
    socialSecurityNumber = ssn;//store ssn
}//end function set ssn

//retrieve ssn
string Employee::getSocialSecurityNumber()const
{
    return socialSecurityNumber;
}//end function retrieve ssn

void Employee::print()const
{
    cout<<getFirstName()<<" "<<getLastName()
        <<"\nsocial security number: "<<getSocialSecurityNumber();
}//end function print
