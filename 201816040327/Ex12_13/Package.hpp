//
//  Package.hpp
//  Ex12_13
//
//  Created by misonomayubw on 2019/12/15.
//  Copyright © 2019 misonomayubw. All rights reserved.
//

#ifndef Package_hpp
#define Package_hpp

#include <stdio.h>
#include<iostream>
using namespace std;



class Package
{
public:
    Package(const string ,const string ,const string , const string , const string ,const string ,
            const string , const string ,const string ,const string , const double , const double );
    double calculateCost();
protected:
    string sender;
    string recipient;
    string senderAddress;
    string recipientAddress;
    string senderCity;
    string recipientCity;
    string senderState;
    string recipientState;
    string senderPostcode;
    string recipientPostcode;
public:
    string getSender();
    string getSenderAddress();
    string getSenderCity();
    string getSenderState();
    string getSenderPostcode();
    string getRecipient();
    string getRecipientAddress();
    string getRecipientCity();
    string getRecipientState();
    string getRecipientPostcode();
protected:
    double weight;
    double ounce;
};

#endif /* Package_hpp */
