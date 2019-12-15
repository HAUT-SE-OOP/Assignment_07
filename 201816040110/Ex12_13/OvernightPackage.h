#include "Package.h"
class OvernightPackage : public Package
{
public:
    OvernightPackage(const string &,const string &,const string &,const string &,const string &,const string &,const string &,double = 0.0,double = 0.0,double = 0.0);
    void setfee(double);
    virtual double calculateCost();
    virtual void print();
private:
    double fee1;
};


