#ifndef OVERNIGHTPACKAGE_H_INCLUDED
#define OVERNIGHTPACKAGE_H_INCLUDED
#include <string> // C++ standard string class
using namespace std;

#include "Package.h" // Package class definition
class OvernightPackage : public Package
{
public:
    OvernightPackage( const string &, const string &, const string &,const string &,const string &,
      int = 0.0,double = 0.0, double = 0.0,double = 0.0 );
      virtual ~OvernightPackage(){}


    void setOverFe( double );
    double getOverFe() const;

    virtual void print() const override;

    virtual double calculateCost() const override;//calculate cost
private:
   double overFe; // base salary

};
#endif // OVERNIGHTPACKAGE_H_INCLUDED
