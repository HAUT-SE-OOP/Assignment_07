#ifndef TWODAYPACKAGE_H_INCLUDED
#define TWODAYPACKAGE_H_INCLUDED
#include <string>
#include "Package.h"
using namespace std;
class TwoDayPackage : public Package
{
public:
    TwoDayPackage(const string &,const string &,const string &,const string &,const string &,
            const string &,const string &,const string &,const string &,const string &,
            double , double , double);
    virtual ~TwoDayPackage(){}

    void setFee(double );
    double getFee() const;

    virtual void print() const ;
    virtual double calculateCost()const;
private:
    double fee;
};

#endif // TWODAYPACKAGE_H_INCLUDED
