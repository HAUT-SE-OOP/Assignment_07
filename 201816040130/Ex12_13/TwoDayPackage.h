#ifndef TWODAYPACKAGE_H
#define TWODAYPACKAGE_H
#include "Package.h"
#include <string>
using namespace std;

class TwoDayPackage:public Package  //definition of class TwoDayPackage
{
public:
    TwoDayPackage(const string &,const string &,const string &,const string &,const string &,const string &,double,double,double); //constructor of TwoDayPackage
    virtual double calculateCost(); //declare function to calculateCost
    virtual void setAddress(string);
    virtual void setCity(string);
    virtual void setState(string);
    virtual string getAddress();
    virtual string getCity();
    virtual string getState();
private:
    double twoDayFee; //data member twoDayFee
};

#endif // TWODAYPACKAGE_H
