#ifndef HOURLYWORKER_H
#define  HOURLYWORKER_H
#include<string>
#include"Employee.h"
#include"HourlyWorker.h"

using namespace std;
class HourlyWorker :public Employee{
public:
	HourlyWorker(double,double);
	virtual double earings() override;
private:
	double hours;
};
#endif 
