// Lab 3: Employee.cpp
// Employee class member-function definitions.
#include <iostream>
using namespace std;

#include "Employee.h" // Employee class definition

/* Define the constructor. Assign each parameter value to the appropriate data
   member. Write code that validates the value of salary to ensure that it is
   not negative. */
Employee::Employee(string first,string last,string qian)
{
    setfirstname(first);
    setlastname(last);
    setsocialnumber(qian);
}
void Employee::setfirstname(string first)
{
    firstname=first;
}
void Employee::setlastname(string last)
{
    lastname=last;
}
void Employee::setsocialnumber(string qian)
{
    socialnumber=qian;
}
string Employee::getfirstname()const
{
    return firstname;
}
string Employee::getlastname()const
{
    return lastname;
}
string Employee::getsocialnumber()const
{
    return socialnumber;
}
void Employee::print() const
{
    cout<<getfirstname()<<' '<<getlastname()
    <<"\nsocial security number: "<<getsocialnumber();
}


/* Define a set function for the first name data member. */

/* Define a get function for the first name data member. */

/* Define a set function for the last name data member. */

/* Define a get function for the last name data member. */

/* Define a set function for the monthly salary data member. Write code
   that validates the salary to ensure that it is not negative. */

/* Define a get function for the monthly salary data member. */
