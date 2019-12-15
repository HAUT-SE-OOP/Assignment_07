//Ex12_15:BasePlusEmployee.h
// BasePlusCommissionEmployee class derived from CommissionEmployee
#ifndef BASEPLUS_H
#define BASEPLUS_H

#include <string> // C++ standard string class
#include "Employee.h"
using namespace std;

#include "CommissionEmployee.h" // CommissionEmployee class definition

class BasePlusCommissionEmployee : public CommissionEmployee
{
public:
	BasePlusCommissionEmployee(const string&, const string&,
		const string&, double = 0.0, double = 0.0, double = 0.0);
	virtual ~BasePlusCommissionEmployee(){}//virtual destructor

	void setBaseSalary(double); // set base salary
	double getBaseSalary() const; // return base salary

	virtual double earnings() const override;//calaulate earnings
	virtual void print() const override;//print object
private:
	double baseSalary; // base salary
}; // end class BasePlusCommissionEmployee

#endif
