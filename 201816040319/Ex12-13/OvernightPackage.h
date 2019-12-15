//Assignment¡ª¡ª11-09
//overNight class

#ifndef OVERNIGHTPACK_H
#define OVERNIGHTPACK_H
#include <iostream>
#include <string>
using namespace std;

#include "Package.h"

class OvernightPackage:public Package
{
public:
    OvernightPackage(string,string,string,string ,string,string,double=0.0,double=0.0,double=0.0) ;
    double calculateCost();

    void setOverprice(double);
    double getOverprice();


private:
    double overprice;

};
#endif // OVERNIGHTPACK_H
