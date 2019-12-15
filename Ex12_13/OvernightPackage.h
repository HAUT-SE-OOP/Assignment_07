
#ifndef OVERNIGHTPACKAGE_H
#define OVERNIGHTPACKAGE_H
#include"Package.h"

class OvernightPackage : public Package
{
public:
    OvernightPackage(string, string, string, string, string,
            string, string, string, string, string, double, double, double);
    virtual double calculateCost();
    virtual string getSenderAddress() const;
    virtual string getRecipientAddress() const;


private:
    double fee; //¶îÍâ·ÑÓÃ

};
#endif // OVERNIGHTPACKAGE_H
