
#include<iostream>
#include"OvernightPackage.h"
using namespace std;

OvernightPackage::OvernightPackage(string sendN, string sendS, string sendCi, string sendCo, string sendA,
 string recipentN, string recipentS, string recipentCi, string recipentCo, string recipentA, double w, double p, double f)
                :Package(sendN, sendS, sendCi, sendCo, sendA, recipentN, recipentS, recipentCi, recipentCo, recipentA, w, p)
                {
                    fee = f;
                    setPrice(Package::getPrice() + fee);
                }

double OvernightPackage::calculateCost()    //·µ»Ø·ÑÓÃ
{
    return Package::calculateCost();
}

string OvernightPackage::getSenderAddress() const
{
    return Package::getSenderAddress();
}
string OvernightPackage::getRecipientAddress() const
{
    return Package::getRecipientAddress();
}
