#include<iostream>
#include<string>
#include"Employee.h"
#include"SalariedEmployee.h"
using namespace std;

SalariedEmployee::SalariedEmployee(string& fist, string& last, string&ssn, double salary)
	:Employee(fist,last,ssn ,0)
{
	weeklySalary = salary;
}


void SalariedEmployee::setWeeklySalary(double salary)
{
	weeklySalary = salary;
}
double SalariedEmployee::getWeeklySalary()
{
	return weeklySalary;
}

double  SalariedEmployee::earings()
{
	return weeklySalary;
}
