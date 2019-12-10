//OvernightPackage.h
// Definition of OvernightPackage class.
#ifndef OVERNIGHTPACKAGE_H
#define OVERNIGHTPACKAGE_H
#include <string>
#include "Package.h"

class OvernightPackage: public Package
{
public:
    OvernightPackage(const string &,const string &,const string &,const string &,const string &,double ,double ,double);//constructor
    virtual ~OvernightPackage(){}//destructor
    void setNightFee(double );//set nightFee
    double getNightFee()const;//return NightFee
    virtual double calculateCost() override;//return the total fee
    virtual void print()const override;//print the information of package
private:
    double nightFee;
};
#endif
