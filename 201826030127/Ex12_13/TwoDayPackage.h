#ifndef TWODAYPACKAGE_H_INCLUDED
#define TWODAYPACKAGE_H_INCLUDED
#include"Package.h"//class Package's declaration
using namespace std;
class TwoDayPackage : public Package
{
public:
    TwoDayPackage(string,string,string,string,string,string,string,string,string,string,double,double,double);
    double calculateCost();//return all fee
    double  getTwoDayFee()  const;//return Two day Fee
    void print();//display object message

private:

  double  TwoDayFee;

};


#endif // TWODAYPACKAGE_H_INCLUDED
