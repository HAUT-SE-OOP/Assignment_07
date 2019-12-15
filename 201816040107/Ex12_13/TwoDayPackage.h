#ifndef TWODAYPACKAGE_H_INCLUDED
#define TWODAYPACKAGE_H_INCLUDED
#include "Package.h"
class TwoDayPackage:public Package
{
public:
    TwoDayPackage(string,string,string,string,string,string,string,double,double,double);
    void setFlatFee(double);//set FlatFee;
    double getFlatFee();//return FlatFee;
    double calculateCost();
private:
    double flatFee;
};


#endif // TWODAYPACKAGE_H_INCLUDED
