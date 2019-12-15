//OverNightPackage,cpp
//class overnight package member function definition
#include "OvernightPackage.h"
#include <iostream>
#include <stdexcept>
using namespace std;

//constructor
OverNightPackage::OverNightPackage(const string &sender,const string &senderaddress,const string &sendercity,const string &senderstate,
                                   const string &receiver,const string &addr,const string &cit,
                 const string &stat,const string &post,double weigh,double pricee,double nightfees)
                 :Package(sender,senderaddress,sendercity,senderstate,receiver,addr,cit,stat,post,weigh,pricee)
{
   if(nightfees>0)
      nightfee = nightfees;
    else
        throw invalid_argument("night fee must be >0");
}//end constructor

//calculate cost
double OverNightPackage::calculateCost()const
{
    return getWeight()*(getPrice()+nightfee);
}//end function calculate cost

void OverNightPackage::print()const
{
    Package::print();
    cout<<endl;
    cout<<"the over night fee has been changed."<<endl;
}//end print

//set over night fee
void OverNightPackage::setNightFee(double nightfees)
{
    if(nightfees>0)
        nightfee =nightfees;
    else
        throw invalid_argument("The night fee is not legal.");
}//end function set fee

// get fee
double OverNightPackage::getNightFee()const
{
    return nightfee;
}//end function retrieve fee
