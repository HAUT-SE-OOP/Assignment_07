#include<iostream>
#include<string>

#include"OvernightPackage.h"

using namespace std;

OvernightPackage::OvernightPackage(const string &ji,const string &jiadd,const string &shou,const string &shouadd,double wei,double fe,double overnightfe)
    :Package(ji,jiadd,shou,shouadd,wei,fe)
{
    overnightfee=overnightfe;//invalue overnightfe to overnightfee
    weight1=wei;//invalue wei to weight
}

double OvernightPackage::CalculateCost()
{
    return weight1*overnightfee+Package::CalculateCost();//return weight1 mutiply overnightfee
}
