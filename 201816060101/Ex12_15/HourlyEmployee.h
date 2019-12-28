#include "Employee.h"
#include <algorithm>
using namespace std;

#ifndef HOURLYEMPLOYEE_H
#define HOURLYEMPLOYEE_H

class HourlyWorker :public Employee {
public:
	HourlyWorker() :Employee() {}
	HourlyWorker(double wage, int hours) :wage(wage), hours(hours) {}
	double earnings();
private:
	double wage;
	int hours;
};

#endif // !HOURLYEMPLOYEE_H
