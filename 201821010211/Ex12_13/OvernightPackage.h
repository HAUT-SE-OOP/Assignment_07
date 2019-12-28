#ifndef OVERNIGHTPACKAGE_H_INCLUDED
#define OVERNIGHTPACKAGE_H_INCLUDED

#include<string.h>
using namespace std;

class OvernightPackage:public Package
{
public:
    OvernightPackage(const string &,const string &, double =0,double=0 ,double=0 );
    void setIncrease(double);
    double getIncrease();
    virtual double calculateCost() ; //const override;
    virtual void print() ; //const override;
private:
    double increase;
};


#endif 
