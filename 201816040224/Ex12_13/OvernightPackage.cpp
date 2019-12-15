#include <iostream>
#include "OverNightPackage.h"
#include "Package.h"

OverNightPackage::OverNightPackage(const string &sender,const string &receiver,const string &address,
const string &city,const string &province,const string &postcode,
double mass,double price,double additionalprice):Package(sender,receiver,address,city,province,postcode,mass,price)
{
    setAdditionalCost(additionalprice);
}

double OverNightPackage::calculateCost()
{
    totalPrice = getMass_r() * (additionalCost + getPrice_r());
    return totalPrice;
}

void OverNightPackage::print()
{
    Package::print();
    cout<<"\nAdditional price due to overnight delay:"<<additionalCost;
    cout<<"\nTotal price is:"<<OverNightPackage::calculateCost();
    cout<<endl;
}

void OverNightPackage::setAdditionalCost(double additionalcost)
{
    additionalCost = additionalcost;
}
