#ifndef OVERNIGHTPACKAGE_H_INCLUDED
#define OVERNIGHTPACKAGE_H_INCLUDED

#include "Paackage.h"

using namespace std;

class OverNightPackage : public Package
{
public:
    OverNightPackage(const string &,const string &,const string &,const string &,const string &,const string &,double = 0.0,double = 0.0,double = 0.0);
    double  calculateCost();
    void print();
    void setAdditionalCost(double additionalcost);
private:
    double additionalCost;
    double totalPrice;
};

#endif // OVERNIGHTPACKAGE_H_INCLUDED
