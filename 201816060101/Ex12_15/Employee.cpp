// Lab 3: Employee.cpp
// Employee class member-function definitions.
#include <iostream>
using namespace std;

#include "Employee.h" // Employee class definition

/* Define the constructor. Assign each parameter value to the appropriate data
   member. Write code that validates the value of salary to ensure that it is
   not negative. */
Employee::Employee(string FirstName, string LastName, int MonthlySalary) :FirstName(FirstName), LastName(LastName), MonthlySalary(MonthlySalary) {}

/* Define a set function for the first name data member. */
void Employee::setFirstName(string _FirstName)
{
	FirstName = _FirstName;
}

/* Define a get function for the first name data member. */
string Employee::getFirstName()
{
	return FirstName;
}

/* Define a set function for the last name data member. */
void Employee::setLastName(string _LastName)
{
	LastName = _LastName;
}

/* Define a get function for the last name data member. */
string Employee::getLastName()
{
	return LastName;
}

/* Define a set function for the monthly salary data member. Write code
   that validates the salary to ensure that it is not negative. */
void Employee::setMonthlySalary(int _MonthlySalary)
{
	if (_MonthlySalary <= 0) MonthlySalary = 0;
	else MonthlySalary = _MonthlySalary;
}

/* Define a get function for the monthly salary data member. */
int Employee::getMonthlySalary()
{
	return MonthlySalary;
}
