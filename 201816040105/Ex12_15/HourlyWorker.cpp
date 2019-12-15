#include <iostream>
#include <stdexcept>
#include "HourlyWorker.h"
using namespace std;

HourlyWorker::HourlyWorker(const string &first, const string &last, const string &ssn, double w, double h)
:Employee(first,last,ssn)
{
	setWage(w);
	setHours(h);
}

void HourlyWorker::setWage(double w)
{
	if (w>=0.0)
	   wage=w;
	else
	   throw invalid_argument("Wage must be >= 0.0");
}

double HourlyWorker::getWage() const
{
	return wage;
}

void HourlyWorker::setHours(double h)
{
	if (h>=0.0)
	   hours=h;
	else
	   throw invalid_argument("Hours must be >= 0.0");
}

double HourlyWorker::earnings() const
{
	if (hours<=40)
	   return getWage()*getHours();
	else
	   return getWage()*getHours()*1.5;
}

void HourlyWorker::print() const
{
	cout<<"hourly-worker ";
	Employee::print();
	cout<<"Wage："<<getWage();
	cout<<"Hours: "<<getHours(); 
}
