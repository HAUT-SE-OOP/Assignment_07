//Employee.cpp
#include <iostream>
#include "Employee.h"
using namespace std;
Employee::Employee(const string & firstNameParameter,const string & lastNameParameter,const string &ssn)
:firstName(firstNameParameter),lastName(lastNameParameter),socialSecurityNumber(ssn)//initialize the data member by constructor
{

}
void Employee::setFirstName(const string & firstName)//to set the first name
{
    this->firstName=firstName;
}
string Employee::getFirstName()const//to get the first name
{
    return firstName;
}
void Employee::setLastName(const string & lastName)//to set the last name
{
    this->lastName=lastName;
}
string Employee::getLastName()const//to get the last name
{
    return lastName;
}
void Employee::setSocialSecurityNumber(const string & ssn)//to set the social security number
{
    socialSecurityNumber=ssn;
}
string Employee::getSocialSecurityNumber()const//to get the social security  number
{
    return socialSecurityNumber;
}
void Employee::print()const//print the information
{
    cout<<getFirstName()<<" "<<getLastName()
    <<"\nsocial security number:"<<getSocialSecurityNumber();
}
