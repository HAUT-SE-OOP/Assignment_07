#include"TwoDayPackage.h"
#include<iostream>

using namespace std;


TwoDayPackage::TwoDayPackage(string na,string add,string c,int po,double p,double w,double f)
:Package( na, add,c,po,p,w)
{
    setfee();
}

void TwoDayPackage::setfee()
{
    double charge =  Package::calculate();
    fee = charge*2;
}
void  TwoDayPackage::getname()
{
    cout<<"TwoDayPackage's name is :";
    Package::getname();
    cout<<endl;
}
void TwoDayPackage::getaddress()
{
    cout<<"TwoDayPackage's address is :";
    Package::getaddress();
    cout<<endl;

}
void TwoDayPackage::calculateCost()
{
    cout<<"TwoDayPackage's cost is :";
    Package::calculateCost();
    cout<<endl;
}




