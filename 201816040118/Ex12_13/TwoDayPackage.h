#ifndef TWODAYPACKAGE_H
#define TWODAYPACKAGE_H
#include<string>
#include"Package.h"
using namespace std;
class TwoDayPackage:public Package
{
public:
    TwoDayPackage(const string &,const string &,const string &,const string &,const string &,const string &,const string &,const string &,const string &,const string &,double,double,double);
    virtual double calculateCost()const override;
private:
    double Fee;
};
#endif
