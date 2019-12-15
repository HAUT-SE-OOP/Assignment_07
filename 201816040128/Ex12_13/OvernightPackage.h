#ifndef OVERNIGHT_H
#define  OVERNIGHT_H
#include<string>
using namespace std;
#include"Package.h"

class OvernightPackage : public Package
{
public:
	OvernightPackage(string,double, double, double);
	double calculateCost();
private:
	double perfee;
};
#endif 

