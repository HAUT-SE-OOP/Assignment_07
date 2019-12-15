#ifndef TWODAYPACKAGE_H
#define TWODAYPACKAGE_H
#include "Package.h"
class TwoDayPackage:public Package
{
public:
    TwoDayPackage(double,string,string,string,string,string,string,string,string,string,string,double,double);
    double calculateCost();
	double getpostage();
    void print();
private:
    double postage;//平寄费

};
#endif // TWODAYPACKAGE_H
