
#ifndef TWODAYPACKAGE_H
#define TWODAYPACKAGE_H

#include "Package.h"

class TwoDayPackage : public Package
{
public:
    TwoDayPackage(string, string, string, string, string,
            string, string, string, string, string, double, double, double);

    virtual double calculateCost();
    virtual string getRecipientAddress() const;
    virtual string getSenderAddress() const;
private:
    double fee; //¶îÍâ·ÑÓÃ

};
#endif // TWODAYPACKAGE_H
