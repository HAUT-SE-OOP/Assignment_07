// Exercise 12.13 Solution:TwoDayPackage.cpp
#include<stdexcept>
#include<iostream>
using namespace std;
#include "TwoDayPackage.h"
//constructor
TwoDayPackage::TwoDayPackage(const string &senderName,const string &sendAddress,const string &sendCity,const string &sendState,const string &sendPostalCode,const string &receiverName,const string &receiveAddress,const string &receiveCity,const string &receiveState,const string &receivePostalCode,double w,double f,double flat)
    :Package(senderName, sendAddress, sendCity, sendState, sendPostalCode, receiverName, receiveAddress, receiveCity, receiveState, receivePostalCode, w, f)
{
    setFlatFee(flat);
}//end TwoDayPackage constructor
//set flatFee
void TwoDayPackage::setFlatFee(double flat)
{
    if(flat>=0)
        flatFee=flat;
    else
        throw invalid_argument("FlatFee must be >= 0.0");
}
//return flatFee
double TwoDayPackage::getFlatFee()const
{
    return flatFee;
}

//return calculateCost
double TwoDayPackage::calculateCost()const
{
    return Package::calculateCost()+Package::getWeight()*getFlatFee();
}
//print TwoDayPackage object
void TwoDayPackage::print()const
{
    Package::print();
    cout<< "\nflatFee: "<<flatFee;
}
