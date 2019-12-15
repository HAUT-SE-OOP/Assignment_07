#ifndef HOURLYEMPLOYEE_H
#define HOURLYEMPLOYEE_H
#include <string>
#include "Employee.h"
using namespace std;

class HourlyEmployee:public Employee
{
public:
	HourlyEmployee(const string &,const string &,const string &,double = 0.0,double = 0.0);
	virtual ~HourlyEmployee() {}
	void setWage(double);
	double getWage() const;
	void setHours(double);
	double getHours() const;
	virtual double earnings() const override;
	virtual void print() const override;
private:
	double wage;
	double hours;
};
#endif
