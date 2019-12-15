#include <iostream>
#include "OvernightPackage.h"
OvernightPackage::OvernightPackage(string name1,string name2,string add1,string add2,string state,string city,string code,double w,double cost,double e)
:Package(name1,name2,add1,add2,state,city,code,w,cost)
{
    setExtraFee(e);
}
void OvernightPackage::setExtraFee(double e)
{
    extrafee=e;
}
double OvernightPackage::getExtraFee()
{
    return extrafee;
}
double OvernightPackage::calculateCost()
{
    return (extrafee+getcost())*getweight();
}
