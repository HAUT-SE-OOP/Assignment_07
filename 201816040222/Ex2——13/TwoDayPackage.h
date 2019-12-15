#ifndef TWODAYPACKAGE_H_INCLUDED
#define TWODAYPACKAGE_H_INCLUDED
#include <string>
#include "Package.h"
using namespace std;

 class TwoDayPackage : public Package
{
public:
    TwoDayPackage(string,string,string,string,string,string,double=0,double=0,double=0);
    virtual double calculateCost() ;
    void setTwoDaysFee(double);
    double getTwoDaysFee();
    virtual void print() ;
private:
    double TwoDaysFee;
};


#endif // TWODAYPACKAGE_H_INCLUDED
