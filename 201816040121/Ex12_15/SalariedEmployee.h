//Ex12_15:	SalariedEmployee.h
//SalariedEmployee class derived from Employee
#ifndef SALARIED_H
#define SALARIED_H

#include <string>
#include "Employee.h"
using namespace std;
class SalariedEmployee : public Employee
{
public:
	SalariedEmployee(const string&, const string&, const string&, double = 0.0);
	virtual ~SalariedEmployee(){}//virtual destructor

	void setWeeklySalary(double);//set weekly salary
	double getWeeklySalary() const;//return weekly salary

	virtual double earnings() const override;//calaulate earnings
	virtual void print() const override;//print object
private:
	double weeklySalary;
};
#endif // !SALARIED_H

