#include"OvernightPackage.h"
#include<iostream>
#include<string>

using namespace std;



OvernightPackage::OvernightPackage(string na,string add,string c,int po,double p,double w,double f)
     :Package(na,add,c,po,p,w)
{
    setcharge(f);

}
void OvernightPackage::setcharge(double c)
{
    charge = c;

}
void  OvernightPackage::getname()
{
    cout<<"OvernightPackage's name is :";
    Package::getname();
    cout<<endl;

}
void OvernightPackage::getaddress()
{
    cout<<"OvernightPackage's address is :";
    Package::getaddress();
    cout<<endl;

}
void OvernightPackage::calculateCost()
{
    cout<<"OvernightPackage's cost is :";
    Package::calculateCost();
    cout<<endl;
}
















