#include <iostream>
#include <string>
#include <stdexcept>
#include "OverNightPackage.h"
using namespace std;

OverNightPackage::OverNightPackage(const string &sN,const string &sA,const string &sC,const string &sS,
                 const string &sZC,const string &rN,const string &rA,const string &rC,
                 const string &rS,const string &rZC,double weight,double price,double charge)
                :Package(sN,sA,sC,sS,sZC,rN,rA,rC,rS,rZC,weight,price)
        {
            setExtraCharges(charge);
        }

void OverNightPackage::setExtraCharges(double charge)
{
    if(charge>=0.0)
        extraCharges = charge;
    else
        throw invalid_argument ("charge must be >= 0.0");
}
double OverNightPackage::getExtraCharges()const
{
    return extraCharges;
}
double OverNightPackage::calculateCost()const
{
    return Package::getWeight() * (Package::getPrice() + getExtraCharges());
}
void OverNightPackage::print() const
{
    cout << "OverNightPackage information :" ;
    Package::print();
    cout<<endl<<"the charge is :"<<getExtraCharges()<<endl;
}
