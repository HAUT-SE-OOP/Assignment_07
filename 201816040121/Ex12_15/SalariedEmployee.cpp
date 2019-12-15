//Ex12_15:SalariedEmployee.cpp
#include <iostream>
#include <stdexcept>
#include "SalariedEmployee.h"
using namespace std;
//constructor
SalariedEmployee::SalariedEmployee(const string& first, const string& last, const string& ssn, double salary)
	:Employee(first, last, ssn)
{
	setWeeklySalary(salary);
}

//set weekly salary
void SalariedEmployee::setWeeklySalary(double salary)
{
	if (salary >= 0.0)
		weeklySalary = salary;
	else
		throw invalid_argument("Weekly salary must be >= 0.0");
}

//get weekly salary
double SalariedEmployee::getWeeklySalary() const
{
	return weeklySalary;
}

//override pure virtual fuction earnings in Employee
double SalariedEmployee::earnings() const
{
	return getWeeklySalary();
}

//print SalariedEmployee's information
void SalariedEmployee::print() const
{
	cout << "salaried employee: ";
	Employee::print();
	cout << "\nweekly salary: " << getWeeklySalary();
}
