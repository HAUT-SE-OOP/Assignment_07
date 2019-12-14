#include<iostream>
#include<string>

#include"TwoDayPackage.h"
using namespace std;

TwoDayPackage::TwoDayPackage(const string &ji,const string &jiadd,const string &shou,const string &shouadd,double wei,double fe,double twodayfe)
     :Package(ji,jiadd,shou,shouadd,wei,fe)
{
    twodayfee=twodayfe;//invalue twodayfe to twidayfee
}

double TwoDayPackage::CalculateCost()
{
    return Package::CalculateCost()+twodayfee;//return the data of A plus B
}
