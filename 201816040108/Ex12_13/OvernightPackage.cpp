// OvernightPackage.cpp
// Member-function definitions for class OvernightPackage.
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

#include "Package.h"
#include "OvernightPackage.h" // OvernightPackage class definition

//OvernightPackage constructor initializes data member balance
OvernightPackage::OvernightPackage(const string &SenderName,const string &ReceiverName,const string &SenderAddress,const string &ReceiverAddress,const string &PostalCode,double ParcelWeighs,double Univalence,double NightFee)
    :Package(SenderName,ReceiverName,SenderAddress,ReceiverAddress,PostalCode,ParcelWeighs,Univalence)
{
    setNightFee(NightFee);
}
//set NightFee
void OvernightPackage::setNightFee(double NightFee)
{
    if(NightFee>0)
        nightFee=NightFee;
    else
        nightFee=0;
}
//return NightFee
double OvernightPackage::getNightFee()const
{
    return nightFee;
}
//return the totalFee
double OvernightPackage::calculateCost()
{
    return (nightFee+Package::getUnivalence())*Package::getParcelWeighs();
}
//Print the information of package
void OvernightPackage::print()const
{
    cout<<"\nOvernight package:\n";
    Package::print();
    cout<<"\nthe nightFee:"<<getNightFee();
}
