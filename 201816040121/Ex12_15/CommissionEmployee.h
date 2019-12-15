//Ex12_15:CommissionEmployee.h
// CommissionEmployee class derived from Employee.
#ifndef COMMISSION_H
#define COMMISSION_H

#include <string> // C++ standard string class
#include "Employee.h"
using namespace std;

class CommissionEmployee : public Employee
{
public:
	CommissionEmployee(const string&, const string&, const string&,
		double = 0.0, double = 0.0);
	virtual ~CommissionEmployee(){}

	void setGrossSales(double); // set gross sales amount
	double getGrossSales() const; // return gross sales amount

	void setCommissionRate(double); // set commission rate (percentage)
	double getCommissionRate() const; // return commission rate

	virtual double earnings() const override;//calaulate earnings
	virtual void print() const override;//print objest
private:
	double grossSales; // gross weekly sales
	double commissionRate; // commission percentage
}; // end class CommissionEmployee

#endif
