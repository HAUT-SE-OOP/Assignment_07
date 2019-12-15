#ifndef OVERNIGHTPACKAGE_H_INCLUDED
#define OVERNIGHTPACKAGE_H_INCLUDED
#include <string>
#include "Package.h"
using namespace std;

 class OvernightPackage : public Package
{
public:
    OvernightPackage(string,string,string,string,string,string,double=0,double=0,double=0);
    virtual double calculateCost();
    void setOverFee(double);
    double getOverFee();
    virtual void print();
private:
    double OverFee;
};


#endif // OVERNIGHTPACKAGE_H_INCLUDED
