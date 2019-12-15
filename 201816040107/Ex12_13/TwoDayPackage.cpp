#include <iostream>
#include "TwoDayPackage.h"
TwoDayPackage::TwoDayPackage(string name1,string name2,string add1,string add2,string city,string code,string state,double w,double cost,double f)

:Package(name1,name2,add1,add2,state,city,code,w,cost)
{
    setFlatFee(f);
}
void TwoDayPackage::setFlatFee(double a)
{
    flatFee=a;
}
double TwoDayPackage::getFlatFee()
{
    return flatFee;
}
double TwoDayPackage::calculateCost()
{
    return getcost()*getweight()+flatFee;
}
