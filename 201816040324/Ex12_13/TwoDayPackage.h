#include <string>
#include "Package.h"
using namespace std ;
class TwoDayPackage: public Package
{
public:
    TwoDayPackage (const string &, const string &,const string &, const string &, const string &,const string &,const string &,const string &,const string &,double=0.0 ,double=0.0 , double =0.0 ) ;
    void setcost (double ) ;
    virtual double calculate_Cost () override ;//计算cost
    virtual string gets_address () override ;
    virtual string gets_city ()override ;
    virtual string gets_state () override;
    virtual string getr_address () override;
    virtual string getr_city ()override ;
    virtual string getr_state () override;
    virtual void print () ;
private:
    double twodaycost ;//额外花费
};
