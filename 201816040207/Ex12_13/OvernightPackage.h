#ifndef OVERNINGHTPACKAGE.H
#define OVERNINGHTPACKAGE.H

#include"Package.h"
#include<iostream>
#include<string>

using namespace std;


class OvernightPackage: public Package
{
public:
    OvernightPackage(string na,string add,string c,int po,double p,double w,double f);

    void setcharge(double);
    virtual void getname();
    virtual void getaddress();
    virtual void  calculateCost();

private:

    double charge;


};












#endif
