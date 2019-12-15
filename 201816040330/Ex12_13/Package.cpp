#include "Package.h"//Package class definition
#include <iostream>
#include <string>//C++ standard string class

using namespace std;

Package::Package(const string &sender,const string &addressee,const string &addr1,const string &addr2,const string &ci,const string &state,const string &postal,double weight,double fee)
{
    sendername=sender;
    addresseename=addressee;
    setAddress1(addr1);
    setAddress2(addr2);
    city=ci;
    statement=state;
    postalcode=postal;
    setWeight(weight);
    setFee(fee);
}//end Package constructor

void Package::setWeight(double weigth)
{
    if(weight>0.0)
        weight=weight;
}//end function setWeight

double Package::getWeight()
{
    return weight;
}//end function getWeight

void Package::setFee(double fee)
{
    if(fee>0.0)
        fee=fee;
}//end function setFee

double Package::getFee()
{
    return fee;
}//end function getFee

double Package::calculateCost(double wei,double fe)
{
    return wei*fe;
}//end function calculateCost

void Package::setAddress2(string a)
{
    address2=a;
}

string Package::getAddress2()
{
    return address2;
}

void Package::setAddress1(string b)
{
    address1=b;
}

string Package::getAddress1()
{
    return address1;
}


