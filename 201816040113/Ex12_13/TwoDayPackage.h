//TwoDayPackage.h
#ifndef TWODAYPACKAGE_H_INCLUDED
#define TWODAYPACKAGE_H_INCLUDED
#include <iostream>
#include <stdexcept>
#include "Package.h"
using namespace std;

class TwoDayPackage:public Package
{
public:
    TwoDayPackage(const string &, const string &, const string &, const string &, const string & ,
                  const string &, const string &, const string &, const string &, const string & ,
                  double=0.0,double=0.0,double=0.0);
    virtual double calculateCost();//calculateCost function for class TwoDayPackage
    virtual void print();//print function for class TwoDayPackage
    void setflatCharge(double);
    double getflatCharge();
private:
    double flatCharge;//flat charge
};

#endif // TWODAYPACKAGE_H_INCLUDED
