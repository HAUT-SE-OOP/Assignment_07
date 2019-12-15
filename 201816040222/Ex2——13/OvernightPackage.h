#include <iostream>
#include <string>
#include "OvernightPackage.h"
using namespace std;

 OvernightPackage::OvernightPackage(string sendname1,string recname1,string address1,string city1,string state1,string code1,double weight1,double price1,double of)
:Package(sendname1,recname1,address1,city1,state1,code1,weight1,price1)
{
    setOverFee(of);
}
double OvernightPackage::calculateCost()
{
    return Package::calculateCost()+OverFee*Package::getWeight();
}
void OvernightPackage::setOverFee(double of)
{
    OverFee=of;
}
double OvernightPackage::getOverFee()
{
    return OverFee;
}
void OvernightPackage::print()
{
    Package::print();
    cout<< "TwoDaysFee is : " << getOverFee() << endl
    << "cost is : " << calculateCost()<< endl << endl;
}
