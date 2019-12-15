#ifndef TWODAYPACKAGE.H
#define TWODAYPACKAGE.H
#include"Package.h"
#include<string>
#include<iostream>

using namespace std;
class TwoDayPackage:public Package

{



public:
    TwoDayPackage(string na,string add,string c,int po,double p,double w,double f);
    void setfee();
    virtual void  getname();
    virtual void  getaddress();
    virtual void  calculateCost();

private:
    double fee;



};















#endif
