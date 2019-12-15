//OvernightPackage.cpp
// Member-function definitions for class Package.
#include <iostream>
#include <stdexcept>
using namespace std;

#include <string>
#include "Package.h"
#include "OvernightPackage.h"

//创建OvernightPackage的构造函数，重新加载函数
OvernightPackage::OvernightPackage(string sendername, string recipientname,
                 string senderaddressees,string rrecipientaddressees, string ssendercity, string rrecipientcity,
                 string ssenderstate, string rrecipientstate, string ssenderpostalcode,string rrecipientpostalcode,
                  double wweight, double ffee, double eextrafee)
    :Package( sendername,recipientname,senderaddressees,rrecipientaddressees,ssendercity,
              rrecipientcity,ssenderstate,rrecipientstate,ssenderpostalcode,rrecipientpostalcode, wweight, ffee )
{
    setExtraFee( eextrafee);
}

void OvernightPackage::setExtraFee(double eextrafee)
{
    if(eextrafee>=0.0)
    {
        extrafee=eextrafee;
    }
    else
        throw invalid_argument(" extrafee must be >= 0.0 ");
}
double OvernightPackage::getExtraFee()
{
   return extrafee;
}

double OvernightPackage::calculateCost()//额外加入每盎司后的费用
{
    return (Package::getFee()+getExtraFee())*Package::getWeight();
}

void OvernightPackage::print()
{
   cout << "Name: " << "    " << "City: " << "    " << "Addressees: " << " " << "State: " << " " << "Postalcode: " << endl;
     cout << getSenderName() << "       " << getSenderCity() << "        " << getSenderAddressees() << "           " <<
        getSenderState() << "       " << getSenderPostalcode()<< endl << getRecipientName() <<
         "       "<< getRecipientCity() <<"        "  << getRecipientAddressees() <<"           "  << getRecipientState()
        << "       " << getRecipientPostalcode() << endl;
        cout <<  " Weight: "<< getWeight() << "       " <<"Fee: " <<  getFee() << "       "<< " ExtraFee: " <<  getExtraFee() << "       " << "CalculateCost: "
        << calculateCost() << endl;
}




