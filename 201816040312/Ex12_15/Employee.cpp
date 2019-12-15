#include <iostream>
#include "Employee.h"

using namespace std;

Employee::Employee(const string &first,const string &last,const string &ssn)
:firstname(first),lastname(last),socialSecurityNumber(ssn)
{

}//end Employee constructor
//set first name
void Employee::setFirstName(const string &first)
{
    firstname=first;
}//end function setFirstname
//return firstName
string Employee::getFirstName()const
{
    return firstname;
}//end function getFirstname
//set last name
void Employee::setLastName(const string &last)
{
    lastname=last;
}//end function setLastname
//return last name
string Employee::getLastName()const
{
    return lastname;
}//end function getlastname
//set socialsecurity number
void Employee::setSocialSecurityNumber(const string &ssn)
{
    socialSecurityNumber=ssn;
}//end function setSocialSecurityNumber
string Employee::getSocialSecurityNumber()const
{
    return socialSecurityNumber;
}//end function getSocialSecurityNumber
void Employee::print()const
{
    cout<<getFirstName()<<" "<<getLastName()<<"\nsocial security number:"<<getSocialSecurityNumber();
}//end function print
