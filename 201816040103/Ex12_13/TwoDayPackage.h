#ifndef TWODAYPACKAGE_H
#define TWODAYPACKAGE_H
#include "Package.h"
#include <string>
using namespace std;

class TwoDayPackage:public Package
{
public:
	TwoDayPackage(const string &,const string &,const string &,const string &,const string &,
		const string &,double,double,double);
	void setFlatcharge(double);
	double getFlatcharge();
	virtual double calculateCost()override;
private:
	double flatcharge;	
};
#endif
