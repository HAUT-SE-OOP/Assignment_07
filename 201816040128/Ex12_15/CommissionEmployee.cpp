#include<iostream>
#include<string>
#include"Employee.h"
#include"CommissionEmployee.h"
using namespace std;

CommissionEmployee::CommissionEmployee(string& fist, string&last, string&ssn, double gross, double rate)
	:Employee(fist, last, ssn, 0)
{
	grossSales = gross;
	commissionRate = rate;
}

void CommissionEmployee::setGrossSales(double gross)
{
	grossSales = gross;
}
double CommissionEmployee::getGrossSales()
{
	return grossSales;
}

void CommissionEmployee::setcommissionRate(double rate)
{
	commissionRate = rate;
}
double CommissionEmployee::getcommissionRate()
{
	return commissionRate;
}

double CommissionEmployee::earings()
{
	return getcommissionRate() * getGrossSales();
}
