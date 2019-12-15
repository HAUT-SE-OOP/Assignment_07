#ifndef BASEPLUSCOMMISSIONEMPLOYEE_H
#define  BASEPLUSCOMMISSIONEMPLOYEE_H
#include<string>
#include"CommissionEmployee.h"
using namespace std;

class BasePlusCommissionEmployee :public CommissionEmployee {
public:
	BasePlusCommissionEmployee(string&, string&, string&, double = 0.0);

	void setBaseSalary(double);
	double getBaseSalary();

	virtual double earings() override;

private:
	double baseSalary;
};
#endif 
