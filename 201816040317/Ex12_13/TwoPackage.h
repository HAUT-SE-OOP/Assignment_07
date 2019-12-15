#ifndef TWOPACKAGE_H
#define TWOPACKAGE_H
#include "Package.h" // include the Package header file

class TwoPackage: public Package // class TwoPackage inherit publicly from Package
{
public:
    explicit TwoPackage( string, string, string, string,string, string, double = 0, double = 0, double = 0 );
    void setTip( double );
    double getTip() ;

 double calculateCost() ;

  void print() ;
private:
    double tip;
};

#endif
