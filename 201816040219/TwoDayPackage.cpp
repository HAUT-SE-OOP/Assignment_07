#include <iostream>
#include <string>
using namespace std;

#include "Package.h"
#include "TwoDayPackage.h"

TwoDayPackage::TwoDayPackage(string first,string second,string dizhi,string chengshi,string zhou,string address,int you,double zhong,double ang,double ad)
    :Package(first,second,dizhi,chengshi,zhou,address,you,zhong,ang)
{
    add=ad;
}

double TwoDayPackage::calculatecost()
{
    double money;
    money=Package::calculatecost()+add;
    return  money;
}

void  TwoDayPackage::print()
{
    Package::print();
    cout<<"总费用"<<calculatecost()<<endl;
}
