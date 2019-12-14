//Assignment_07: OvernightPackage.h
//class definition
#ifndef OVERNIGHTPACKAGE_H
#define OVERNIGHTPACKAGE_H

#include "Package.h" // include the Package header file

class OvernightPackage: public Package // class OvernightPackage inherit publicly from Package
{
public:
    explicit OvernightPackage( string, string, string, string,
                      string, string, double = 0, double = 0, double = 0 );// constructor
    virtual ~OvernightPackage() override {} // destructor

    // set and get function
    void setEveryTip( double );
    double getEveryTip() const;

    // cost
    virtual double calculateCost() const override;

    virtual void print() const override;// show informations
private:
    double everyTip;// every package need another cost
};

#endif // OVERNIGHTPACKAGE_H
