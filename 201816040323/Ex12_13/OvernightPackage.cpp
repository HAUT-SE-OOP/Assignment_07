#include <iostream>
#include <string>
#include "OvernightPackage.h"
using namespace std;

OvernightPackage::OvernightPackage(string sen,string acc,string add,string cit,string sta,string zip,double wei,double pri,double of)
:Package(sen,acc,add,cit,sta,zip,wei,pri)
{
    setevOFee(of);
}
double OvernightPackage::calculateCost()
{
    return Package::calculateCost()+evOFee*Package::getweight();
}
void OvernightPackage::setevOFee(double of)
{
    evOFee=of;
}
double OvernightPackage::getevOFee()
{
    return evOFee;
}
void OvernightPackage::print()
{
    Package::print();
    cout<< "\nTDFee is " << getevOFee()
    << "\ncost is " << calculateCost()<< endl;
}
