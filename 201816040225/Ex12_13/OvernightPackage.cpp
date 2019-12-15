#include<iostream>
#include<stdexcept>
#include"OvernightPackage.h"//class define
using namespace std;
OvernightPackage::OvernightPackage(const string &nm1,const string &nm2,const string &loc,const string &ct,const string &sta,
                 const string &coding,double weights,double fees,double pay1)
                 :Package(nm1,nm2,loc,ct,sta,coding,weights,fees)
                 {
                     setOverPay(pay1);//set overpay
                 }
                 void OvernightPackage::setOverPay(double pay1)//function to set pay
                 {
                     overpay=pay1;
                 }
                double OvernightPackage::getOverPay()//function to get pay
                 {
                     return overpay;
                 }
                 double OvernightPackage::calculateCost()//the new calculate function
                {

                    return Package::getWeight()*(getOverPay()+getFee());
                }
               void OvernightPackage::print()//print the message
               {
                    cout<<"OvernightPackage information is the following:\n"
    <<"\nthe send address is :"<<Package::getSend()

    <<"\nthe receive address is :"<<Package::getHome();

    cout<<"\nthe payment is :"<<calculateCost();
    cout<<"\n\n";
               }
