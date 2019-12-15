#ifndef OVERNIGHTPACKAGE_H
#define OVERNIGHTPACKAGE_H

#include "Package.h"

class OvernightPackage: public Package
{
public:
    explicit OvernightPackage( string, string, string, string,string, string, double = 0, double = 0, double = 0 );
    void setEveryTip( double );
    double getEveryTip() ;

 double calculateCost() ;
void print() ;
private:
    double everyTip;
};

#endif
