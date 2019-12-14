#include <iostream>
using namespace std;
#include "Employee.h" // Employee class definition

Employee::Employee( const string &firstname,const string &lastname,const string &ssn )
    :firstName( firstname ), lastName( lastname ), socialSecurityNumber( ssn )
{
    //empty body
}

//set first name
void Employee::setFirstName( const string &fname )
{
    firstName = fname;
}//end function

//get first name
string Employee::getFirstName() const
{
    return firstName;
}//end function

//set last name
void Employee::setLastName( const string &lname )
{
    lastName = lname;
}//end function

//get last name
string Employee::getLastName() const
{
    return lastName;
}//end function

//function to set social security number
void Employee::setSocialSecurityNumber( const string &ssn )
{
    socialSecurityNumber = ssn;
}//end function

//function to get social security number
string Employee::getSocialSecurityNumber() const
{
    return socialSecurityNumber;
}//end function

//function to print
void Employee::print() const
{
    cout<<getFirstName()<<' '<<getLastName()
        <<"\nsocial security number: "<<getSocialSecurityNumber()<<endl;
}//end function

