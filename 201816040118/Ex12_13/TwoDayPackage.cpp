#include<iostream>
#include<stdexcept>
#include"Package.h"
#include"TwoDayPackage.h"
using namespace std;
TwoDayPackage::TwoDayPackage(const string &sender,const string &receive,const string &address,const string &city,const string &state,const string& postcode,
                             const string &address0,const string &city0,const string &state0,const string& postcode0,double weight,double price,double fee)
:Package(sender,receive,address,city,state,postcode,address0,city0,state0,postcode0,weight,price)
{
    Fee=fee;
}
double TwoDayPackage::calculateCost()const
{
    return Package::calculateCost()+Fee;
}

