//OvernightPackage.cpp
#include <iostream>
#include <stdexcept>
#include "OvernightPackage.h"
using namespace std;

// constructor
OvernightPackage::OvernightPackage(const string &sname,const string &saddress,const string &scity,const string &sstate,const string &spostcode,
                                   const string &rname,const string &raddress,const string &rcity,const string &rstate,const string &rpostcode,
                                   double weight,double priceForPerOunce,double Fee)
          :Package(sName,sAddress,sCity,sState,sPostcode,rName,rAddress,rCity,rState,rPostcode,Weight,PriceForPerOunce)
{
        setsName(sname);
        setsAddress(saddress);
        setsCity(scity);
        setsState(sstate);
        setsPostcode(spostcode);

        setrName(rname);
        setrAddress(raddress);
        setrCity(rcity);
        setrState(rstate);
        setrPostcode(rpostcode);

        setWeight(weight);
        setPriceForPerOunce(priceForPerOunce);
        setextraFee(Fee);
}

//function calculateCost for class Package
void OvernightPackage::print()
{
    cout<<"For OvernightPackage: "<<endl;
    for(int i=0;i<40;i++)
        cout<<"*";
    cout<<endl;
    Package::print();
    cout<<"The TotalCost is: $"<<OvernightPackage::calculateCost()<<endl;
}

//calculateCost function for class OverNightPackage
double OvernightPackage::calculateCost()
{
    return extraFee*Weight+Package::calculateCost();
}

void OvernightPackage::setextraFee(double Fee)
{
    extraFee=Fee;
}
double OvernightPackage::getextraFee()
{
    return extraFee;
}
