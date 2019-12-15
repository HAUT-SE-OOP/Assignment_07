
#include <iostream>
#include <string>
#include "Package.h"
#include "OvernightPackage.h"


OvernightPackage::OvernightPackage(string first,string second,string dizhi,string chengshi,string zhou,string address,int you,double zhong,double ang,double l)
    :Package(first,second,dizhi,chengshi,zhou,address,you,zhong,ang)
{
lv=l;
}


double OvernightPackage::calculatecost()
{
    double money;
    money=lv*Package::getWei()+Package::getAng()*Package::getWei();
    return money;
}

void  OvernightPackage::print()
{
    Package::print();
    cout<<"总费用"<<calculatecost()<<endl;
}



