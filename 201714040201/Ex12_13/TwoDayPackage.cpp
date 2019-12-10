// TwoDayPackage.cpp
// Member-function definitions for class TwoDayPackage.
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

#include "Package.h"
#include "TwoDayPackage.h" // TwoDayPackage class definition

//TwoDayPackage constructor initializes data member balance
TwoDayPackage::TwoDayPackage(const string &SenderName,const string &ReceiverName,const string &SenderAddress,const string &ReceiverAddress,const string &PostalCode,double ParcelWeighs,double Univalence,double Please)
    :Package(SenderName,ReceiverName,SenderAddress,ReceiverAddress,PostalCode,ParcelWeighs,Univalence)
{
    setPlease(Please);
}
//set please
void TwoDayPackage::setPlease(double Please)
{
    if(Please>0)
        please=Please;
    else
        please=0;
}
//return please
double TwoDayPackage::getPlease()const
{
    return please;
}
//return the total fee
double TwoDayPackage::calculateCost()
{
    return please+Package::calculateCost();
}
//print the information of package
void TwoDayPackage::print()const
{
    cout<<"\nTwoDays package:\n";
    Package::print();
    cout<<"\nthe value of please: "<<getPlease();
}
