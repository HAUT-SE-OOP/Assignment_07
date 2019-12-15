//Ex12_15:HourlyWorker.cpp
#include <iostream>
#include <stdexcept>
#include "HourlyWorker.h"
using namespace std;
//constructor
HourlyWorker::HourlyWorker(const string& first, const string& last, const string& ssn,
	double w, double h)
	:Employee(first, last, ssn)
{
	setWage(w);
	setHours(h);
}

//set wage
void HourlyWorker::setWage(double w)
{
	if (w >= 0.0)
		wage = w;
	else
		throw invalid_argument("Wage must be >= 0");
}

//return wage
double HourlyWorker::getWage() const
{
	return wage;
}

//set hours
void HourlyWorker::setHours(double h)
{
	if (h >= 0.0)
		hours = h;
	else
		throw invalid_argument("Hours must be >= 0.0");
}

//return hours
double HourlyWorker::getHours() const
{
	return hours;
}

//override virtual fuction earnings in Employee
double HourlyWorker::earnings() const
{
	double flag = 0.0;
	double sum = 0.0;
	if (hours <= 40)
		return getWage() * getHours();
	else
	{
		flag = 1.5 * getWage();
		sum = 40*getWage() + flag * (getHours() - 40);
		return sum;
	}
}

//print HourlyWorker's information
void HourlyWorker::print() const
{
	cout << "hourly worker: ";
	Employee::print();
	cout << "\nwage: " << getWage();
	cout << "\nhours: " << getHours();
}
