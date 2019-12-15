#include <iostream>
#include <iomanip>
#include <stdexcept>
using namespace std;
#include "TwoDayPackage.h"
TwoDayPackage::TwoDayPackage(const string &se,const string &re,const string &radd,const string &sadd,const string &ci,const string &con,const string &post,double Weight,double Fee,double Fee1)
:Package(se,re,radd,sadd,ci,con,post,Weight,Fee)
{
    setfee1(Fee1);
}

void TwoDayPackage::setfee1(double a)
{
    fee1=a;
}

double TwoDayPackage::calculateCost()
{
    return Package::calculateCost()+fee1;
}

void TwoDayPackage::print()
{
    cout<<"the send name is "<<Package::getsename()<<"\nthe receive name is "<<Package::getrename()<<"\nthe send address is "<<Package::getsaddress()<<"\nthe receive address is "<<Package::getraddress()<<"\nthe city is "<<Package::getcity()<<
    "\nthe continent is "<<Package::getcontinent()<<"\nthe postalcode is "<<Package::getpostalcode()<<endl<<"the TwoDayPackage fee is "<<calculateCost()<<endl;

}
