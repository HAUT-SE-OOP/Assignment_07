//Employee.cpp

#include <iostream>
#include <string>
#include "Employee.h"
using namespace std;

//constructor
Employee::Employee(const string &first,const string &last,const string &ssn)
{
    setFirstName(first);
    setLastName(last);
    setSocialSecurityNumber(ssn);

}//end Employee constructor

//set first name
void Employee::setFirstName(const string &first)
{
    firstName=first;
}//end function setFirstName
string Employee::getFirstName() const
{
    return firstName;
}//end function getFirstName

//set last name
void Employee::setLastName(const string &last)
{
    lastName=last;
}//end function setFirstName
string Employee::getLastName() const
{
    return lastName;
}//end function getLastName

//set SSN
void Employee::setSocialSecurityNumber(const string &ssn)
{
    socialSecurityNumber=ssn;
}//end function setSocialSecurityNumber
string Employee::getSocialSecurityNumber() const
{
    return socialSecurityNumber;
}//end function getSocialSecurityNumber

void Employee::print()const
{
    cout<<"first name : "<<getFirstName()<<endl
        <<"last name : "<<getLastName()<<endl
        <<"socialSecurityNumber : "<<getSocialSecurityNumber()<<endl;
}//end function print
