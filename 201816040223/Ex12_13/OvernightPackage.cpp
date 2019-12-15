// Member-function definitions for class TwoDayPackage
#include <iostream>
using namespace std;

#include "OvernightPackage.h" // TwoDayPackage class definition
OvernightPackage::OvernightPackage(const string &con,const string &ship,const string &sit,const string &pla,const string &sta,double zip,double wei,double co,double over)
:Package(con,ship,sit,sta,pla,zip,wei,co)
{
    setOverfee(over);


}
void OvernightPackage::setOverfee(double over)
{
    overfee=over;
}
double OvernightPackage::getOverfee()
{
    return overfee;
}
double OvernightPackage::calculateCost()
{
    return Package::calculateCost()+overfee;
}
