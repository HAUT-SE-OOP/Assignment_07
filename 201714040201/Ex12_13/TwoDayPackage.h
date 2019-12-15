//TwoDayPackage.h
// Definition of TwoDayPackage class.
#ifndef TWODAYPACKAGE_H
#define TWODAYPACKAGE_H
#include <string>
#include "Package.h"

class TwoDayPackage:public Package
{
public:
    TwoDayPackage(const string &,const string &,const string &,const string &,const string &,double ,double ,double);//constructor
    virtual ~TwoDayPackage(){}//destructor
    void setPlease(double );//set please
    double getPlease()const;//return please
    virtual double calculateCost() override;//return the total fee
    virtual void print()const override;//print information of package
private:
    double please;
};
#endif
