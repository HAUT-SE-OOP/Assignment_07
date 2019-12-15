#include<iostream>
using namespace std;
#include"Package.h"
#include"TwoDayPackage.h"

TwoDayPackage::TwoDayPackage(double Postage,string Recipient,string Sendername,string Recipientaddress,string Sendaddress,
string Recipientcity,string Sendcity,string Recipientstate,string Sendstate,string Recipientzipcode, string Sendzipcode,
double Weight,double Pay)
:Package(Recipient,Sendername,Recipientaddress,Sendaddress,Recipientcity,Sendcity,Recipientstate,Sendstate,Recipientzipcode,Sendzipcode,Weight,Pay)
{
    postage=Postage;
}
double TwoDayPackage::getpostage()
{
	return postage;
}
double TwoDayPackage::calculateCost()
{
    return Package::calculateCost()+getpostage();
}
void TwoDayPackage::print()
{
     Package::print();
     cout<<"pingjifei:"<<getpostage()<<endl;
      cout<<"this is TwoDayPackage cost:";
}
