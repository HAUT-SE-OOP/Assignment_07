#include <iostream>
#include "Package.h"
#include <stdexcept>

using namespace std;

Package::Package(const string &sfirst,const string &slast,const string &afirst,const string &alast,const string &saddress,const string &aaddress,const string &scity
            const string &acity,const string &sstate,const string &astate,const string &scode,const string &acode,double pweight,double pcost)//constructor
{
    senderFirstName=sfirst;
    senderLastName=slast;
    addresseeFirstName=afirst;
    addresseeLastName=alast;
    senderAddress=saddress;
    addresseeAddress=aaddress;
    senderCity=scity;
    addresseeCity=acity;
    senderState=sstate;
    addresseeState=astate;
    senderPostalCode=scode;
    addresseePostalCode=acode;
    setPackageWeight(pweight);
    setPerUnitCost(pcost);

}
//14 sets of set and get functions
void Package::setPackageWeight(double pw)
{
    if(pw>0)
    {
        packageWeight=pw;
    }
    else
    {
        throw invalid_argument("packageweight must be > 0");
    }
}
double Package::getPackageWeight()const
{
    return packageWeight;
}
void Package::setPerUnitCost(double puc)
{
    if(puc>0)
    {
        perUnitCost=puc;
    }
    else
    {
        throw invalid_argument("perUnitCost must be > 0");
    }
}
double Package::getPerUnitCost()const
{
    return perUnitCost;
}
void Package::setsenderFirstName(const string &s)
{
    senderFirstName=s;
}
string Package::getsenderFirstName()const
{
    return senderFirstName;
}
void Package::setaddresseeFirstName(const string &a)
{
    addresseeFirstName=a;
}
string Package::getaddresseeFirstName()const
{
    return addresseeFirstName;
}
void Package::setsenderLastName(const string &s)
{
    senderLastName=s;
}
string Package::getsenderLastName()const
{
    return senderLastName;
}
void Package::setaddresseeLastName(const string &a)
{
    addresseeLastName=a;
}
string Package::getaddresseeLastName()const
{
    return addresseeLastName;
}
void Package::setsenderAddress(const string &s)
{
    senderAddress=s;
}
string Package::getsenderAddress()const
{
    return senderAddress;
}
void Package::setaddresseeAddress(const string &a)
{
    addresseeAddress=a;
}
string Package::getaddresseeAddress()const
{
    return addresseeAddress;
}
void Package::setsenderCity(const string &s)
{
    senderCity=s;
}
string Package::getsenderCity()const
{
    return senderCity;
}
void Package::setaddresseeCity(const string &a)
{
    addresseeCity=a;
}

 void Package::setcostPerOunce( double xx )
 {
     if( xx < 0 )
     {
         cout << "The cost per ounce cannot be negative" << endl;
         exit(1);
     }
     costPerOunce = xx;
 }

 double Package::getpackageWeight()
 {
     return packageWeight;
 }

 double Package::getcostPerOunce()
 {
     return costPerOunce;
 }

 double Package::calculateCost()
 {
     return packageWeight * costPerOunce ;
 }

 void Package::print()
 {
     cout << "The sender information is as follows : " << endl;
     cout << "Name : " << getsenderName() << endl;
     cout << "Address : " << getsenderAddress() << endl;
     cout << "City : " << getsenderCity() << endl;
     cout << "State : " << getsenderState() << endl;
     cout << "Postal Code : " << getsenderPostalCode() << endl;
     cout << '\n' ;
     cout << "The recipient information is as follows : " << endl;
     cout << "Name : " << getrecipientName() << endl;
     cout << "Address : " << getrecipientAddress() << endl;
     cout << "City : " << getrecipientCity() << endl;
     cout << "State : " << getrecipientState() << endl;
     cout << "Postal Code : " << getrecipientPostalCode() << endl;
 }
