#include <iostream>
#include <stdexcept>
#include "HourlyEmployee.h"
using namespace std;

HourlyEmployee::HourlyEmployee(const string &first,const string &last,const string &ssn,double wag,double hour)
	:Employee(first,last,ssn)
{
	setWage(wag);
	setHours(hour);
}
void HourlyEmployee::setWage(double wag)
{
	if(wag >= 0.0)
		wage = wag;	
	else
		throw invalid_argument("Wage must be >= 0.0");
}
double HourlyEmployee::getWage() const
{
	return wage;
}
void HourlyEmployee::setHours(double hour)
{
	if(hour >= 0.0)
		hours = hour;
	else
		throw invalid_argument("Hours must be >= 0.0");
}
double HourlyEmployee::getHours() const
{
	return hours;
}
double HourlyEmployee::earnings() const
{
	if(getHours() <= 40.0)
		return getWage()*getHours();
	else
		return getWage()*40.0 + getWage()*(getHours()-40.0)*1.5;
}
void HourlyEmployee::print() const
{
	cout<<"Hourly employee: ";
	Employee::print();
	cout<<"\nwage : "<<getWage();
	cout<<"\nhours : "<<getHours();
} 
