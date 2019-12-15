#include <iostream>

using namespace std;

#include"TwoDayPackage.h"
#include"Package.h"

TwoDayPackage::TwoDayPackage(string s,string r,string sta,string cit,
                             int pos,double w,double c,double f,string sSta,string sCit,int sPos):
                                 Package::Package(s,r,sta,cit,pos,w,c,sSta,sCit,sPos)
    {
        faltFee = f;
    }

double TwoDayPackage::getFaltFee()
{
    return faltFee;
}

double TwoDayPackage::calculateCost()
{
    return Package::calculateCost()+faltFee;
}
