
// Definition of TwoDayPackage class.
#ifndef TWODAYPACKAGE_H
#define TWODAYPACKAGE_H
#include"Package.h"
/* Write a directive to include the Package header file */
using namespace std;
class TwoDayPackage: public Package/* Write a line to have class TwoDayPackage inherit publicly from Package */
{
public:
TwoDayPackage(const string &,const string &,const string &,const string &,const string &,double=0.0,double=0.0,double=0.0,double=0.0);
     /* Declare constructor for TwoDayPackage */
    void setTwofee(double);
    double getTwofee();
   virtual double calculateCost();
private:
   double twofee;/* Declare data member twofee */


}; // end class TwoDayPackage

#endif
