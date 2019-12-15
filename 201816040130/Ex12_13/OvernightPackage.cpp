#include "Package.h"
#include "OvernightPackage.h"
#include <string>
using namespace std;

OvernightPackage::OvernightPackage(const string & sName,const string & rName,const string & add,const string & c,const string & s,const string & pc,double w,double f,double of):Package(sName,rName,add,c,s,pc,w,f)
{
    overnightFee = of;
    setAddress(add);
    setCity(c);
    setState(s);
}

void OvernightPackage::setAddress(string add) //define function to setAddress
{
    address = add;
}
void OvernightPackage::setCity(string c)
{
    city = c;
}
void OvernightPackage::setState(string s)
{
    state = s;
}

 double OvernightPackage::calculateCost() //define function to calculateCost
{
    return Package::calculateCost() + Package::getWeight() * overnightFee;
}


 string OvernightPackage::getAddress() //define function to getAddress
{
    return address;
}

 string OvernightPackage::getCity()
{
    return city;
}

 string OvernightPackage::getState()
{
    return state;
}


