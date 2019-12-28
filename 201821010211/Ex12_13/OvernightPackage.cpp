#include <iostream>
using namespace std;

#include "Package.h"
#include "OvernightPackage.h"

OvernightPackage::OvernightPackage(const string &Address1,const string &Address2,double Weight,double Oneshot,double Increase)
        :Package(Address1,Address2,Weight,Oneshot),increase(Increase)
{
    setIncrease(Increase);
}
void OvernightPackage::setIncrease(double Increase)
{
    if(Increase>0)
        increase=Increase;
}
double OvernightPackage::getIncrease()
{
    return increase;
}
double OvernightPackage::calculateCost()
{
    double sum=getOneshot()+getIncrease();
    Package::setOneshot(sum);
    Package::getOneshot();
    return Package::calculateCost();
}
void OvernightPackage::print()
{
    Package::print();
    cout<<"Cost: "<< OvernightPackage::calculateCost()<<"\n"<<endl;
}
