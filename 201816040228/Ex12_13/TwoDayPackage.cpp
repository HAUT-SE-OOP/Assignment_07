//TwoDayPackage.cpp
// Member-function definitions for class Package.
#include <iostream>
#include <stdexcept>
using namespace std;

#include <string>
#include "TwoDayPackage.h"
//创建TwoDayPackage的构造函数，重新加载函数
TwoDayPackage::TwoDayPackage(string sendername, string recipientname,
                 string senderaddressees,string rrecipientaddressees, string ssendercity, string rrecipientcity,
                 string ssenderstate, string rrecipientstate, string ssenderpostalcode,string rrecipientpostalcode,
                  double wweight, double ffee, double pingji)
    :Package(sendername,recipientname,senderaddressees,rrecipientaddressees,ssendercity,
              rrecipientcity,ssenderstate,rrecipientstate,ssenderpostalcode,rrecipientpostalcode, wweight, ffee )
{
    setPingJiFei( pingji);
}

void TwoDayPackage::setPingJiFei( double pingji)
{
    if(pingji>=0.0)
    {
        pingjifei=pingji;
    }
    else
        throw invalid_argument(" pingjifei must be >= 0.0 ");//判断
}
double TwoDayPackage::getPingJiFei()
{
   return pingjifei;
}

double TwoDayPackage::calculateCost()//加入额外收费后的费用
{
    return getPingJiFei()+Package::calculateCost();
}


void TwoDayPackage::print()
{
    cout << "Name: " << "    " << "City: " << "    " << "Addressees: " << " " << "State: " << " " << "Postalcode: " << endl;
     cout << getSenderName() << "       " << getSenderCity() << "        " << getSenderAddressees() << "           " <<
        getSenderState() << "       " << getSenderPostalcode()<< endl << getRecipientName() <<
         "       "<< getRecipientCity() <<"        "  << getRecipientAddressees() <<"           "  << getRecipientState()
        << "       " << getRecipientPostalcode() << endl;
        cout <<  " Weight: "<< getWeight() << "       " <<"Fee: " <<  getFee() << "       "<< " PingJiFei: " <<  getPingJiFei() << "       " << "CalculateCost: "
        << calculateCost() << endl;
}

