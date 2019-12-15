#include <string>
using namespace std;
#include "OvernightPackage.h"

OvernightPackage::OvernightPackage( const string &N1,
                              const string &N2,const string &D,const string &C,const string &Z,const string &ID,
                              double Weight,double Fee,double Extrafee)
:Package(N1,N2,D,C,Z,ID,Weight,Fee)
{
    setExtraFee(Extrafee);
}
void OvernightPackage::setExtraFee(double &Extrafee)
{
    extrafee=Extrafee;
}

double OvernightPackage::getExtraFee()
{
    return extrafee;
}

double OvernightPackage::caculateCost()
{
    return (getWeight()+getExtraFee())*getPrice();
}

