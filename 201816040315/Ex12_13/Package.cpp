//Package.cpp
//class Package member function definition
#include <iostream>
#include <stdexcept>
#include "Package.h"//Package class definition
using namespace std;

//constructor
Package::Package(const string &sender,const string &senderaddress,const string &sendercity,const string &senderstate,const string &receiver,
                 const string &addr,const string &cit,const string &stat,const string &post,double weigh,double pricee)
{
    senderName = sender;//should validate
    senderAddress = senderaddress;//should validate
    senderCity = sendercity;//should validate
    senderState = senderstate;//should validate
    addressName = receiver;//should validate
    addressAddress = addr;//should validate
    addressCity = cit;//should validate
    addressState = stat;//should validate
    postalCode = post;//should validate
    setWeight( weigh );//validate and store weight
    setPrice( pricee );//validate and store price
}//end Package constructor

//set sender name
void Package::setSenderName(const string &sender)
{
    senderName = sender;//should validate
}//end function set sender name

//retrieve sender name
string Package::getSenderName()const
{
    return senderName;
}//end function retrieve sender name

//set sender address
void Package::setSenderAddress(const string &senderaddress)
{
    senderAddress = senderaddress;//store sender address
}//end function set sender address

//retrieve sender address
string Package::getSenderAddress()const
{
    return senderAddress;
}//end function retrieve sender address

//set sender city
void Package::setSenderCity(const string &sendercity)
{
    senderCity=sendercity;//store city of sender
}//end function set sender city

//retrieve sender city
string Package::getSenderCity()const
{
    return senderCity;
}//end function retrieve sender city

//set sender state
void Package::setSenderState(const string &senderstate)
{
    senderState=senderstate;//store state of sender
}//end function set sender state

//retrieve sender state
string Package::getSenderState()const
{
    return senderState;
}//end function retrieve sender state

//set address name
void Package::setAddressName(const string &receiver)
{
    addressName = receiver;//should validate
}//end function set address name

//retrieve address name
string Package::getAddressName()const
{
    return addressName;
}//end function retrieve addressName

//set address
void Package::setAddress(const string &addr)
{
    addressAddress = addr;//should validate
}//end function set address

//retrieve address
string Package::getAddress()const
{
    return addressAddress;
}//end function retrieve address

//set city
void Package::setCity(const string &cit)
{
    addressCity = cit;//should validate
}//end function set city

//retrieve city
string Package::getCity()const
{
    return addressCity;
}//end function

//set state
void Package::setState(const string &stat)
{
    addressState = stat;//should validate
}//end function set state

//retrieve state
string Package::getState()const
{
    return addressState;
}//end function retrieve state

//set post code
void Package::setPostalCode(const string &post)
{
    postalCode = post;//should validate
}//end function set post code

//retrieve post code
string Package::getPostalCode()const
{
    return postalCode;
} //end function retrieve post code

//set weight
void Package::setWeight(double weigh)
{
    if(weigh>0.0)
        weight = weigh;
    else
      {
        weight= 0.0;
        throw invalid_argument("weight must be>0.0");
      }
}//end function set weight

//retrieve weight
double Package::getWeight()const
{
    return weight;
}//end function retrieve weight

//set price
void Package::setPrice(double pricee)
{
    if(pricee>0.0)
        price = pricee;
    else
    {
        price=0.0;
        throw invalid_argument("price must be >0.0");
    }
}//end function set price

//retrieve price
double Package::getPrice()const
{
    return price;
}//end function retrieve price

//calculate cost
double Package::calculateCost()const
{
    return weight*price;
}//end function calculateCost

//print information
void Package::print()const
{
    cout<<"\nsender name:   "<<senderName
        <<"\nsender address "<<senderAddress
        <<"\nsender city    "<<senderCity
        <<"\nsender state   "<<senderState
        <<"\naddress name:  "<<addressName
        <<"\naddress:       "<<addressAddress
        <<"\ncity:          "<<addressCity
        <<"\nstate:         "<<addressState
        <<"\npostcode:      "<<postalCode
        <<"\nweight:        "<<weight;

}//end function print
