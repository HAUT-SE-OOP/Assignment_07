#include <iostream>
#include "Employee.h"

using namespace std;
//基类Employee构造函数
Employee::Employee( const string &first, const string &last , const string &ssn )
    :firstName(first), lastName(last), socialSecurityNumber(ssn)
{

}

void Employee::setFirstName( const string &first )
{
    firstName=first;
}
string Employee::getFirstName() const
{
    return firstName;
}

void Employee::setLastName( const string &last )
{
    lastName=last;
}

string Employee::getLastName() const
{
    return lastName;
}

void Employee::setSocialSecurityNumber( const string &ssn )
{
    socialSecurityNumber=ssn;
}

string Employee::getSocialSecurityNumber() const
{
    return socialSecurityNumber;
}
//打印输出姓名和社会保险号码
void Employee::print() const
{
    cout << getFirstName() << " " << getLastName() << "\nsocial security number: " << getSocialSecurityNumber();
}
