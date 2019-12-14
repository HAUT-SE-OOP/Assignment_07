#include <iostream>
using namespace std;

// OvernightPackage class definition
#include "OvernightPackage.h"
OvernightPackage::OvernightPackage(const string &sender, const string &recipient, const string &address, const string &city, const string &state,
   int postal,double weight,double fee,double fe)
   // initialize composed object
   :Package(sender,recipient,address,city,state,postal,weight,fee) //Initialize the OvernightPackage data member,pass (sender,recipient,address,city,state,postal,weight,fee)to its constructor
{
    setOverFe(fe);// validate and store flatCharge
}//end OvernightPackage constructor


void OvernightPackage::setOverFe( double fe)
{
    overFe = (fe > 0.0)? fe :0.0;
}
double OvernightPackage::getOverFe()const
{
    return overFe;
}

double OvernightPackage::calculateCost() const
{
    return getOverFe() + getWeightNumber() * getFeeNumber();
}
void OvernightPackage::print() const
{
    cout<< " overfe: "<< overFe;
    Package::print();
}
