//Assignment12-14

#include <iostream>
#include "Employee.h"//Employee class definition
using namespace std;

Employee::Employee(const string &first,const string &last,const string &ssn) //definition of class Employee
:firstName(first),lastName(last),socialSecurityNumber(ssn)
{
   //empty body
}//end Employee constructor

void Employee::setFirstName(const string &first) //define function to setFirstName
{
    firstName = first;
}

string Employee::getFirstName()const //define function to getFirstName
{
    return firstName;
}


void Employee::setLastName(const string &last) //define function to setLastName
{
    lastName = last;
}

string Employee::getLastName()const //define function to getLastName
{
    return lastName;
}

void Employee::setSocialSecurityNumber(const string &ssn) //define function to setSocialSecurityNumber
{
    socialSecurityNumber = ssn;
}

string Employee::getSocialSecurityNumber()const //define function to getSocialSecurityNumber
{
    return socialSecurityNumber;
}

void Employee::print()const //define function to print
{
    cout << getFirstName() << ' ' << getLastName() << "\nsocial security number: " << getSocialSecurityNumber();
}


