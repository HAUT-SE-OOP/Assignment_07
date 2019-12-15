#ifndef OVERNIGHTPackage_H
#define OVERNIGHTPackage_H
#include <string>
#include "Package.h"
using namespace std ;
class OvernightPackage :public Package
{
public:
    OvernightPackage (const string &, const string &,const string &, const string &, const string &,const string &,const string &,const string &,const string &,double=0.0 ,double=0.0 , double =0.0  ) ;
    void setweightcost (double ) ;
    virtual double calculate_Cost ()  ;//计算cost
    virtual void print () ;
    virtual string gets_address ()  ;
    virtual string gets_city ()override ;
    virtual string gets_state () override;
    virtual string getr_address () override;
    virtual string getr_city ()override ;
    virtual string getr_state () override;
private:
    double weightcost ;
};
#endif
