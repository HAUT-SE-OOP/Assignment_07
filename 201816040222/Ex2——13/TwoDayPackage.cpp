#include <iostream>
#include <string>
#include "TwoDayPackage.h"
using namespace std;

 TwoDayPackage::TwoDayPackage(string sendname1,string recname1,string address1,string city1,string state1,string code1,double weight1,double price1,double a)
:Package(sendname1,recname1,address1,city1,state1,code1,weight1,price1)
{
    setTwoDaysFee(a);
}
double TwoDayPackage::calculateCost()
{
    return Package::calculateCost()+TwoDaysFee;
}
void TwoDayPackage::setTwoDaysFee(double a)
{
    TwoDaysFee=a;
}
double TwoDayPackage::getTwoDaysFee()
{
    return TwoDaysFee;
}
void TwoDayPackage::print()
{
    Package::print();
    cout<< "TwoDaysFee is : " << getTwoDaysFee() << endl
    << "cost is " << calculateCost()<< endl << endl;
}
