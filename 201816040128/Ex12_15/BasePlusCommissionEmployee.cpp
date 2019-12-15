#include<iostream>
#include<string>
#include"Employee.h"
#include"BasePlusCommissionEmployee.h"
#include"CommissionEmployee.h"
using namespace std;



BasePlusCommissionEmployee::BasePlusCommissionEmployee(string& fist, string& last, string& ssn, double base)
	:CommissionEmployee(fist, last, ssn, 0)
{
	baseSalary = base;
}

void BasePlusCommissionEmployee::setBaseSalary(double base)
{
	baseSalary = base;
}
double BasePlusCommissionEmployee::getBaseSalary()
{
	return baseSalary;
}

double BasePlusCommissionEmployee::earings()
{
	return getBaseSalary() + CommissionEmployee::earings();
}
