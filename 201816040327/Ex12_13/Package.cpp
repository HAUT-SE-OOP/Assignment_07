//
//  Package.cpp
//  Ex12_13
//
//  Created by misonomayubw on 2019/12/15.
//  Copyright © 2019 misonomayubw. All rights reserved.
//

#include "Package.hpp"

#include <iostream>
using namespace std;

Package::Package(const  string s,const  string r,const string sa,const string ra,
                const  string sc,const string rc, const string ss, const string rs,
                 const string sp,const string rp,const double w,const double o)
:sender(s),recipient(r),senderAddress(sa),recipientAddress(ra),senderCity(sc),recipientCity(rc),
senderState(ss),recipientState(rs),senderPostcode(sp),recipientPostcode(rp)
  {
        if(w>0)
        {
            // make sure weight > 0
            weight=w;
        }
        else
        {
            throw invalid_argument("Package's weight should be positive.");
        }

        if(o>0)
        {// make sure ounce > 0
            ounce=o;
        }
        else
        {
            throw invalid_argument("Package's ounce should be positive.");
        }

    }

double Package::calculateCost()
{
    return weight*ounce;
    // calculate all fee
}

string Package::getSender()
{
    return sender;
}

string Package::getSenderAddress()
{
    return senderAddress;
}

string Package::getSenderCity()
{
    return senderCity;
}

string Package::getSenderState()
{
    return senderState;
}

string Package::getSenderPostcode()
{
    return senderPostcode;
}

string Package::getRecipient()
{
    return recipient;
}

string Package::getRecipientAddress()
{
    return recipientAddress;
}

string Package::getRecipientCity()
{
    return recipientCity;
}

string Package::getRecipientState()
{
    return recipientState;
}

string Package::getRecipientPostcode()
{
    return recipientPostcode;
}
