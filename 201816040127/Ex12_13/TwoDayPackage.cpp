#include <iostream>
using namespace std;

// TwoDayPackage class definition
#include "TwoDayPackage.h"
TwoDayPackage::TwoDayPackage(const string &sender, const string &recipient, const string &address, const string &city, const string &state,
   int postal,double weight, double fee , double charge)
   // initialize composed object
   :Package(sender,recipient,address,city,state,postal,weight,fee) //Initialize the TwoDayPackage data member,pass (sender,recipient,address,city,state,postal,weight,fee)to its constructor
{
    setFlatCharge(charge);// validate and store flatCharge
}//end TwoDayPackage constructor

void TwoDayPackage::setFlatCharge( double charge)
{
    flatCharge = (charge > 0.0)? charge :0.0;
}
double TwoDayPackage::getFlatCharge()const
{
    return flatCharge;
}

double TwoDayPackage::calculateCost() const
{
    return getWeightNumber() * getFeeNumber() + getFlatCharge();
}

void TwoDayPackage::print() const
{
    cout<< " flatcharge: "<< flatCharge;
    Package::print();
}
