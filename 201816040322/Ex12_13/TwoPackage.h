//Assignment_07: TwoPackage.h
//class definition
#ifndef TWOPACKAGE_H
#define TWOPACKAGE_H
#include "Package.h" // include the Package header file

class TwoPackage: public Package // class TwoPackage inherit publicly from Package
{
public:
    explicit TwoPackage( string, string, string, string,
                      string, string, double = 0, double = 0, double = 0 );// constructor

    virtual ~TwoPackage() override {} // destructor

    // set and get function
    void setTip( double );
    double getTip() const;

    virtual double calculateCost() const override;

    virtual void print() const override;// show informations
private:
    double tip;
};

#endif // TWOPACKAGE_H
