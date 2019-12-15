#include<iostream>
#include<stdexcept>
#include"OvernightPackage.h"
using namespace std;
OvernightPackage::OvernightPackage(const string &sender,const string &receive,const string &address,const string &city,const string &state,const string& postcode,const string &address0,const string &city0,const string &state0,
                 const string& postcode0,double weight,double price,double charge)
:Package(sender,receive,address,city,state,postcode,address0,city0,state0,postcode0,weight,price)
{
    Charge=charge;
}
double OvernightPackage::calculateCost()const
{
    return Package::getWeight()*(Package::getPrice()+Charge);
}

