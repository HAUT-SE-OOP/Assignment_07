// Exercise 12.13 Solution:OvernightPackage.h

#ifndef OVERNIGHTPACKAGE_H
#define OVERNIGHTPACKAGE_H
#include<iostream>
using namespace std;

#include"Package.h"
class OvernightPackage : public Package
{
public:
    OvernightPackage(const string &, const string &, const string &,const string &, const string &, const string &,const string &, const string &, const string &,const string &,
        double = 0.0, double = 0.0 ,double = 0.0);
    virtual ~OvernightPackage(){}
    void setAdditionalFee(double);//set additionalFee
    double getAdditionalFee()const;//return additionalFee

    virtual double calculateCost()const override;//return calculateCost
    virtual void print()const override;//print OvernightPackage object
private:
    double additionalFee;
};


#endif // OVERNIGHTPACKAGE_H
