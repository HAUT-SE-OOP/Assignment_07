//Ex12_15:HourlyWorker.h
//HourlyWorker class derived from Employee.
#ifndef HOURLYWORKER_H
#define HOURWORKER_H
#include <string>
#include "Employee.h"
using namespace std;
class HourlyWorker : public Employee
{
public:
	HourlyWorker(const string&, const string&, const string&, double = 0.0, double = 0.0);
	virtual ~HourlyWorker(){}//virtual destructor

	void setWage(double);//set wage
	double getWage() const;//return wage
	void setHours(double);//set pieces
	double getHours() const;//return pieces

	virtual double earnings() const override;//calaulate earnings
	virtual void print() const override;//print object

private:
	double wage;
	double hours;
};
#endif // !HOURLYWORKER_H
