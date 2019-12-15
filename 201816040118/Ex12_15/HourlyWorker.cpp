#include <iostream>
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
		wage = w;
}

//return wage
double HourlyWorker::getWage() const
{
	return wage;
}

//set hours
void HourlyWorker::setHours(double h)
{
	
		hours = h;
}

//return hours
double HourlyWorker::getHours() const
{
	return hours;
}

//override virtual fuction earnings in Employee
double HourlyWorker::earnings() const
{
	if (hours <= 40)
		return getWage() * getHours();
	else
		return (40 * getWage() + (getHours - 40) * 1.5 * getWage());
}

//print HourlyWorker's information
void HourlyWorker::print() const
{
	cout << "hourly worker: ";
	Employee::print();
	cout << "\nwage: " << getWage();
	cout << "\nhours: " << getHours();
}

