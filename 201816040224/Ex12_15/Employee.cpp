//Fig.12.10:Emplpoyee.cpp
//Abstract-base-class Employee member-function definitions.
//Note:No definitions are giver for pure virtual functiond.
#include<iostream>
#include"Employee.h"//Employee class definition

using namespace std;

//constructor
Employee::Employee(const string &first,const string &last,const string &ssn)
    :firstName(first),lastName(last),socialSecurityNumber(ssn)
    {
        //empy body
    }//end Employee construstor
//set first name
void Employee::setFirstName(const string &first)
{
    firstName = first;
}//end function setFirstName

//return first name
string Employee::getFirstName()const
{
    return firstName;
}//end function getFirstName

//set last name
void Employee::setLastName(const string &last)
{
    lastName = last;
}
string Employee::getLastName()name
{
    return lastName
}

void Employee::setSocialSecurityNumber(const string &ssn)
{
    socialSecurityNumber = ssn;
}
string Employee::getSocialSecurityNumber()const
{
    return socialSecurityNumber;
}

void Employee::print()const
{
    cout<<getFirstName()<<''<<getLastName()<<"\nsocial security number:"<<getSocialSecurityNumber();
}
