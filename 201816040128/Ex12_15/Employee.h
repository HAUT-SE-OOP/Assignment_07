#ifndef EMPLOYEE_H
#define  EMPLOYEE_H
#include<string>
using namespace std;

class Employee {
public:
	Employee(double wag);
	virtual double earings();
	double getWage();
private:
	double wage;
};
#endif 
