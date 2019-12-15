#include <iostream>
#include <stdexcept>
#include "OvernightPackage.h"

using namespace std;

OvernightPackage::OvernightPackage(
string s,string a,string r,string e,string c,string t,string n,double w,double f,double add)
:Package( s, a, r, e, c, t, n, w, f)
{
    setAdditional(add);
}
void OvernightPackage::setAdditional(double add)
{
    additional=add;
}
double OvernightPackage::getAdditional()
{
    return additional;
}
double OvernightPackage::calculateCost()
{
    return (getAdditional()+Package::getFee())*Package::getWeight();
}
void OvernightPackage::print()
{
    Package::print();
    cout<<"OvernightCost"<<calculateCost()<<endl;
}
