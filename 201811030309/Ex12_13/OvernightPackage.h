#ifndef OVERNIGHTPACKAGE_H_INCLUDED
#define OVERNIGHTPACKAGE_H_INCLUDED
#include "Package.h"

class OvernightPackage : public Package
{
public:
    /*Overnight information for initializing for packages*/
    OvernightPackage( const string &, const string &, const string &, const string &, const string &, const string &,
                   const string &, const string &, const string &, const string &, double, double, double );
    virtual double calculateCost();
    virtual void print();
    void setextraprice( double );//set the new charge for overnight;
    double getextraprice() const;//get the charge for overnight;
private:
    double extraprice;//overnight for extra charge;
};

#endif // OVERNIGHTPACKAGE_H_INCLUDED
