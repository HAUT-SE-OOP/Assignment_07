// Member-function definitions for class TwoDayPackage
#include <iostream>
using namespace std;

#include "TwoDayPackage.h" // TwoDayPackage class definition
TwoDayPackage::TwoDayPackage(const string &con,const string &ship,const string &sit,const string &pla,const string &sta,double zip,double wei,double co,double two)
:Package(con,ship,sit,sta,pla,zip,wei,co)
{
    setTwofee(two);


}
void TwoDayPackage::setTwofee(double two)
{
    twofee=two;
}
double TwoDayPackage::getTwofee()
{
    return twofee;
}
double TwoDayPackage::calculateCost()
{
    return Package::calculateCost()+twofee;
}
