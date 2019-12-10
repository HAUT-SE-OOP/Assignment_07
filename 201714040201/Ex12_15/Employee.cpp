//Employee.cpp
//Abstract-base-class Employee member-function definitions
//Note: No definitions are given for pure virtual functions
#include <iostream>
#include "Employee.h"
using namespace std;

//constructor
Employee::Employee(const string &first,const string &last,const string &ssn)
    :firstName(first),lastName(last),socialSecurityNumber(ssn)
{
    //empty body
}
//set first name
void Employee::setFirstName(const string &first)
{
    firstName=first;
}//end function setFirstName
//return first name
string Employee::getFirstName()const
{
    return firstName;
}//end function getFirstName
//set last name
void Employee::setLastName(const string &last)
{
    lastName=last;
}//end function setLastName
//return last name
string Employee::getLastName()
{
    return lastName;
}//end function getLastName
//set society security number
void Employee::setSocialSecurityNumber(const string &ssn)
{
    socialSecurityNumber=ssn;
}//end function setSocialSecurity
//return social security number
string Employee::getSocialSecurityNumber()
{
    return socialSecurityNumber;
}//end function getSocialSecurityNumber
//pring Employee's information (virtual,but not pure virtual)
void Employee::print()
{
    cout<<getFirstName()<<' '<<getLastName()
    <<"\nsocial security number: "<<getSocialSecurityNumber();
}//end function print
