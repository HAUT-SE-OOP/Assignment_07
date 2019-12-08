//Package.cpp

#include"Package.h"
#include<stdexcept>

Package::Package(string senderNam,string senderAddres,string senderCit,string senderStat,string senderPostCod,string addresseeNam,string addresseeAddres,string addresseeCit,string addresseeStat,string addresseePostCod,double weigh,double unitPric)
    :senderName(senderNam),
    senderAddress(senderAddres),
    senderCity(senderCit),
    senderState(senderStat),
    senderPostCode(senderPostCod),
    addresseeName(addresseeNam),
    addresseeAddress(addresseeAddres),
    addresseeCity(addresseeCit),
    addresseeState(addresseeStat),
    addresseePostCode(addresseePostCod)
{
    setWeight(weigh);
    setUnitPrice(unitPric);
}
void Package::setWeight(double weigh)
{
    if(weigh>0)
    {
        weight=weigh;
    }
    else
    {
        throw invalid_argument("weight's value error");
    }
}
void Package::setUnitPrice(double unitPric)
{
    if(unitPric>0)
    {
        unitPrice=unitPric;
    }
    else
    {
        throw invalid_argument("unitPrice's value error");
    }
}

double Package::getWeight() const
{
    return weight;
}
double Package::getUnitPrice() const
{
    return unitPrice;
}
string Package::getSenderName() const
{
    return senderName;
}
string Package::getAddresseeName() const
{
    return addresseeName;
}
string Package::getSenderAddress() const
{
    return senderAddress;
}
string Package::getAddresseeAddress() const
{
    return addresseeAddress;
}

/*
double Package::calculateCost()    //direct calculate by weight*unitPrice
{
    return getWeight()*getUnitPrice();
}
*/




