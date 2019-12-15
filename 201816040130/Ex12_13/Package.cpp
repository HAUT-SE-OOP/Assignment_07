#include "Package.h"
#include <string>
using namespace std;

Package::Package(const string & sName,const string & rName,const string & add,const string & c,const string & s,const string & pc,double w,double f)
{
  setWeight(w);
  setFee(f);
}

void Package::setWeight(double w)
{
    if(w > 0)
        weight = w;
}

double Package::getWeight()
{
    return weight;
}

void Package::setFee(double f)
{
    if(f > 0)
        fee = f;
}

double Package::getFee()
{
    return fee;
}

 double Package::calculateCost()
{
    return (weight*fee);
}

 string Package::getAddress()
{
    return address;
}

 string Package::getCity()
{
    return city;
}

 string Package::getState()
{
    return state;
}








