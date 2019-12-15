
//Employee.cpp
//Abstract-base-class Employee member-function definitions.
//Note:No definitions are given for pure virtual functions.
#include<iostream>
#include"Employee.h"    //Employee class definition
using namespace std;
//constructor
Employee::Employee(const string &a,const string &b,const string &c)
{
     setFirstName(a);
     setLastName(b);
     setSocialSecurityNumber(c);
}    //end Employee constructor

//set first name
void Employee::setFirstName(const string &first)
{
    firstName=first;
}

//return first name
string Employee::getFirstName() const
{
    return firstName;
}

//set last name
void Employee::setLastName(const string &last)
{
    lastName=last;
}

//return last name
string Employee::getLastName() const
{
    return lastName;
}

//set social security number
void Employee::setSocialSecurityNumber(const string &ssn)
{
    socialSecurityNumber=ssn;   //should validate
}

//return social security number
string Employee::getSocialSecurityNumber() const
{
    return socialSecurityNumber;
}

//print Employee's information (virtual ,but not pure virtual)
void Employee::print() const
{
    cout << getFirstName() << ' ' << getLastName()
        << "\nsocial security number: " << getSocialSecurityNumber()<<endl;;
}
