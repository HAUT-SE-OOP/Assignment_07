//TwoDayPackage.h
//class TwoDayPackage definition
#ifndef TWODAYPACKAGE_H
#define TWODATPACKAGE_H
#include <iostream>
#include "Package.h"
using namespace std;

class TwoDayPackage : public Package
{
public:
    TwoDayPackage(const string &,const string &,const string &,const string &, const string &,const string &,
                     const string &,const string &,const string &,double, double,double);

    virtual ~TwoDayPackage(){};
    void setTwoDayFee( double );//set fee
    double getTwoDayFee()const;//retrieve fee
    virtual double calculateCost()const override;//calculate cost
    virtual void print()const;//print object
private:
    double twoDayfee;//data member for TwoDayPackage
};
#endif // TWODAYPACKAGE_H
