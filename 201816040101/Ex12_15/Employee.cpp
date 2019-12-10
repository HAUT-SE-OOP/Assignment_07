#include <iostream>
#include "Employee.h"

using namespace std;

Employee::Employee(string first, string last, string ss)
     :firstName(first), lastName(last), ssn(ss)
{

}
void Employee::setFirstName(string a)
{
    firstName=a;
}
string Employee::getFirstName()
{
    return firstName;
}
void Employee::setLastName(string a)
{
    lastName=a;
}
string Employee::getLastName()
{
    return lastName;
}
void Employee::setSSN(string a)
{
    ssn=a;
}
string Employee::getSSN()
{
    return ssn;
}
void Employee::print()
{
    cout<<"the first name is : " <<getFirstName();
    cout<<"\nthe last name is : "<<getLastName();
    cout<<"\nsocial security number :"<<getSSN();
}

