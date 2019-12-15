#include<iostream>

#include"Employee.h"
#include"HourlyWorker.h"

using namespace std;


HourlyWorker::HourlyWorker(double wag, double hour)
	:Employee(wag)
{
	hours = hour;
}

double HourlyWorker::earings() 
{
	if (hours < 0)
		return 0;
	if (hours <= 40)
		return getWage()* hours;
	if (hours > 40)
		return getWage() * 40 + getWage() *(hours - 40) * 1.5;
}