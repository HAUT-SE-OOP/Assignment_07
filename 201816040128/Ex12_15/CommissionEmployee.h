#ifndef COMMISSIONEMPLOYEE_H
#define  COMMISSIONEMPLOYEE_H
#include<string>
#include"Employee.h"
using namespace std;

class CommissionEmployee :public Employee {
public:
	CommissionEmployee(string&, string&, string&, double = 0.0, double = 0.0);

	void setGrossSales(double);
	double getGrossSales();

	void setcommissionRate(double);
	double getcommissionRate();

	virtual double earings() override;

private:
	double grossSales;
	double commissionRate;
};
#endif 
