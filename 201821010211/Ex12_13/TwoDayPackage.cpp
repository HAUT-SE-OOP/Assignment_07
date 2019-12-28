#include <iostream>
using namespace std;

#include "Package.h"
#include "TwoDayPackage.h"

TwoDayPackage::TwoDayPackage(const string &Address1,const string &Address2,double Weight,double Oneshot,double fee)
        :Package(Address1,Address2,Weight,Oneshot)
{
    setflatfee(fee);
}
void TwoDayPackage::setflatfee(double fee)
{
    if(fee>0)
       flatfee=fee;
}
double TwoDayPackage::getflatfee()
{
    return flatfee;
}
double TwoDayPackage::calculateCost()
{
    return Package::calculateCost()+getflatfee();
}
void TwoDayPackage::print()
{
    Package::print();
    cout<<"Cost: "<<TwoDayPackage::calculateCost()<<endl;
}
