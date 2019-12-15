#include <string>
using namespace std;
#include "TwoDayPackage.h"

TwoDayPackage::TwoDayPackage( const string &N1,
                              const string &N2,const string &D,const string &C,const string &Z,const string &ID,
                              double Weight,double Fee,double twodaysFee)
    :Package( N1,N2,D,C,Z,ID,Weight,Fee)
    {
        setTwoDaysFee(twodaysFee);
    }

void TwoDayPackage::setTwoDaysFee(double &twodaysFee)
{
    TwoDayfee=twodaysFee;
}

double TwoDayPackage::getTwoDaysFee()
{
    return TwoDayfee;
}

double TwoDayPackage::caculateCost()
 {
     return Package::caculateCost()+getTwoDaysFee();
 }
