#ifndef TWODAYPACKAGE_H_INCLUDED
#define TWODAYPACKAGE_H_INCLUDED
#include <string> // C++ standard string class
using namespace std;

#include "Package.h" // Package class definition
class TwoDayPackage : public Package
{
public:
    TwoDayPackage( const string &, const string &, const string &,const string &,const string &,
      int = 0.0,double = 0.0, double = 0.0 ,double = 0.0);
      virtual ~TwoDayPackage(){}

    void setFlatCharge( double );
    double getFlatCharge() const;

    virtual double calculateCost() const override;//calculate cost

    virtual void print() const override;
private:
   double flatCharge; // base salary
   //a declaration for a package data member
}; // end class TwoDayPackage


#endif // TWODAYPACKAGE_H_INCLUDED
