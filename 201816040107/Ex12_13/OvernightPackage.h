#ifndef OVERNIGHTPACKAGE_H_INCLUDED
#define OVERNIGHTPACKAGE_H_INCLUDED
#include "Package.h"
class OvernightPackage:public Package
{
public:
    OvernightPackage(string,string,string,string,string,string,string,double,double,double);
    void setExtraFee(double);//set extrafee;
    double getExtraFee();//return extrafee;
    double calculateCost();
private:
    double extrafee;
};


#endif // OVERNIGHTPACKAGE_H_INCLUDED
