#ifndef SALARIEDEMPLOYEE_H
#define  SALARIEDEMPLOYEE_H
#include<string>
#include"Employee.h"
using namespace std;

class SalariedEmployee :public Employee {
public:
	SalariedEmployee(string&, string&, string&, double = 0.0);

	void setWeeklySalary(double);
	double getWeeklySalary();

	virtual double earings() override;
	
private:
	double weeklySalary;
};
#endif 
