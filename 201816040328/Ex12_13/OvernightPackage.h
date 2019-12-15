#ifndef OVERNIGHTPACKAGE_H_INCLUDED
#define OVERNIGHTPACKAGE_H_INCLUDED

#include<string.h>
#include"Package.h"
using namespace std;

class OvernightPackage : public Package
{
public:
    OvernightPackage(const string ,const string ,const string ,const string ,const string ,
            const string ,const string ,const string ,const string ,const string ,
            const double ,const double ,
            const double );

    virtual double calculateCost() override ;//return fee

private:
    double extraFee;//additional Fee
};

#endif // OVERNIGHTPACKAGE_H_INCLUDED
