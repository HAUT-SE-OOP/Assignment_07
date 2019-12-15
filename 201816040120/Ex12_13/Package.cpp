#include <iostream>
#include <string>
#include <stdexcept>
#include "Package.h"
using namespace std;

Package::Package(const string &sN,const string &sA,const string &sC,const string &sS,
                 const string &sZC,const string &rN,const string &rA,const string &rC,
                 const string &rS,const string &rZC,double weigh,double price)/*initial funication*/
        {
            setSenderName(sN);
            setSenderAddress(sA);
            setSenderCity(sC);
            setSenderState(sS);
            setSenderZipCode(sZC);
            setRecipientName(rN);
            setRecipientAddress(rA);
            setRecipientCity(rC);
            setRecipientState(rS);
            setRecipientZipCode(rZC);
            setWeight(weight);
            setPrice(price);
        }
void Package::setSenderName( const string &sN)
{
    senderName = sN;
}
string Package::getSenderName() const
{
    return senderName;
}
void Package::setSenderAddress(const string &sA)
{
    senderAddress = sA;
}
string Package::getSenderAddress() const
{
    return senderAddress;
}
void Package::setSenderCity(const string &sC)
{
    senderCity = sC;
}
string Package::getSenderCity() const
{
    return senderCity;
}
void Package::setSenderState(const string &sS)
{
    senderState = sS;
}
string Package::getSenderState() const
{
    return senderState;
}
void Package::setSenderZipCode(const string &sZC)
{
    senderZipCode = sZC;
}
string Package::getSenderZipCode() const
{
    return senderZipCode;
}
void Package::setRecipientName(const string &rN)
{
    recipientName = rN;
}
string Package::getRecipientName() const
{
    return recipientName;
}
void Package::setRecipientAddress(const string &rA)
{
    recipientAddress = rA;
}
string Package::getRecipientAddress() const
{
    return recipientAddress;
}
void Package::setRecipientCity(const string &rC)
{
    recipientCity = rC;
}
string Package::getRecipientCity() const
{
    return recipientCity;
}
void Package::setRecipientState(const string &rS)
{
    recipientState = rS;
}
string Package::getRecipientState() const
{
    return recipientState;
}
void Package::setRecipientZipCode(const string &rZC)
{
    recipientZipCode = rZC;
}
string Package::getRecipientZipCode() const
{
    return recipientZipCode;
}
void Package::setWeight(const double weight)
{
    if(weight >= 0.0)
        this->weight = weight;
    else
        throw invalid_argument ( "weight must be >0.0" );
}
double Package::getWeight() const
{
    return weight;
}
void Package::setPrice(const double price)
{
    if(price >= 0.0)
        this->price = price;
    else
        throw invalid_argument ( "price must be >= 0.0" );
}
double Package::getPrice() const
{
    return price;
}
double Package::calculateCost() const
{
    return getWeight() * getPrice();
}
void Package::print() const
{
    cout <<getSenderName()<<" "<<getSenderAddress()<<" "<<getSenderCity()<<" "<<getSenderState()<<" "
    <<getSenderZipCode()<<" "<<getRecipientName()<<" "<<getRecipientAddress()<<" "
    <<getRecipientCity()<<" "<<getRecipientState()<<" "<<getRecipientZipCode()/*<<getWeight()<<getPrice()*/<<endl;

}
