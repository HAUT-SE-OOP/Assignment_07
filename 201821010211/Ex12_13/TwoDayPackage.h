#ifndef TWODAYPACKAGE_H_INCLUDED
#define TWODAYPACKAGE_H_INCLUDED

#include<string.h>
using namespace std;

class TwoDayPackage:public Package
{
public:
    TwoDayPackage(const string &,const string &,double=0, double=0 ,double=0);
    void setflatfee(double);
    double getflatfee();
    virtual double calculateCost() ;//const override;
    virtual void print() ;//const override;
private:
    double flatfee;
};

#endif
