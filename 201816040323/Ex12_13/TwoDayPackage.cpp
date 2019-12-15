#include <iostream>
#include <string>
#include "TwoDayPackage.h"
using namespace std;

TwoDayPackage::TwoDayPackage(string sen,string acc,string add,string cit,string sta,string zip,double wei,double pri,double tdf)
:Package(sen,acc,add,cit,sta,zip,wei,pri)
{
    setTDFee(tdf);
}
double TwoDayPackage::calculateCost()
{
    return Package::calculateCost()+TDFee;
}
void TwoDayPackage::setTDFee(double tdf)
{
    TDFee=tdf;
}
double TwoDayPackage::getTDFee()
{
    return TDFee;
}
void TwoDayPackage::print()
{
    Package::print();
    cout<< "\nTDFee is " << getTDFee()
    << "\ncost is " << calculateCost()<< endl;
}
