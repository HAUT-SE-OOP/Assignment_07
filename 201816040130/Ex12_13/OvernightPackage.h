#ifndef OVERNIGHTPACKAGR_H
#define OVERNIGHTPACKAGE_H
#include "Package.h"

class OvernightPackage:public Package  //definition of class OvernightPackage
{
public:
    OvernightPackage(const string &,const string &,const string &,const string &,const string &,const string &,double,double,double); //constructor of OvernightPackage
    virtual double calculateCost();
    virtual void setAddress(string); //declare function to setAddress
    virtual void setCity(string);
    virtual void setState(string);
    virtual string getAddress(); //declare function to getAddress
    virtual string getCity();
    virtual string getState();
private:
    double overnightFee; //data member overnightFee
};
#endif // OVERNIGHTPACKAGR_H
