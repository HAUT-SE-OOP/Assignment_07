#ifndef TWODAYPACKAGE_H_INCLUDED
#define TWODAYPACKAGE_H_INCLUDED
#include"Package.h"
class TwoDayPackage:public Package
{
public:
    TwoDayPackage(string,string,string,string,int,double,double,double,string,string,int);
    double getFaltFee();
    virtual double calculateCost();
private:
    double faltFee;
};


#endif // TWODAYPACKAGE_H_INCLUDED
