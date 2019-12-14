#include<iostream>
#include<string>

#include"Package.h"
using namespace std;

Package::Package(const string &ji,const string &jiadd,const string &shou,const string &shouadd,double wei,double fe)
{
    jiname=ji;//invalue ji to jiname
    shouname=shou;//invalue shou to shouname
    shouaddress=shouadd;//invalue add to address
    jiaddress=jiadd;
    if(wei>0&&fe>0)//if both of them more than 0
    {
        weight=wei;//invalue wei to weight
        fee=fe;//invalue fe to fee
    }
}

double Package::CalculateCost()
{
    return weight*fee;//return the data of weight mutiply fee
}
string Package::getjiaddress()
{
    return jiaddress;
}
string Package::getshouaddress()
{
    return shouaddress;
}
