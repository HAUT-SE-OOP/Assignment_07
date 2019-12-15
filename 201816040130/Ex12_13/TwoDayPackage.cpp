#include "Package.h"
#include "TwoDayPackage.h"
#include <string>
using namespace std;

TwoDayPackage::TwoDayPackage(const string & sName,const string & rName,const string & add,const string & c,const string & s,const string & pc,double w,double f,double tf):Package(sName,rName,add,c,s,pc,w,f)
{
    twoDayFee = tf;
    setAddress(add);
    setCity(c);
    setState(s);
}

void TwoDayPackage::setAddress(string add)
{
    address = add;
}
void TwoDayPackage::setCity(string c)
{
    city = c;
}
void TwoDayPackage::setState(string s)
{
    state = s;
}

 double TwoDayPackage::calculateCost()
{
    return (Package::calculateCost() + twoDayFee);
}

 string TwoDayPackage::getAddress()
{
    return address;
}

 string TwoDayPackage::getCity()
{
    return city;
}

 string TwoDayPackage::getState()
{
    return state;
}


