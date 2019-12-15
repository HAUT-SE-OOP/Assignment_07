// Exercise 12.13 Solution:TwoDayPackage.h
#ifndef TWODAYPACKAGE_H
#define TWODAYPACKAGE_H
#include<iostream>
using namespace std;
#include"Package.h"
class TwoDayPackage : public Package
{
public:
    TwoDayPackage(const string &, const string &, const string &,const string &, const string &, const string &,const string &, const string &, const string &,const string &,
        double = 0.0, double = 0.0 ,double = 0.0);
    virtual ~TwoDayPackage(){}
    void setFlatFee(double);//set flatFee
    double getFlatFee()const;//return flatFee

    virtual double calculateCost()const override;//return calculateCost
    virtual void print()const override;//print TwoDayPackage object
private:
   double flatFee;

};


#endif // TWODAYPACKAGE_H
