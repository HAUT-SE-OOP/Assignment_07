//TwoDayPackage.cpp
//class TwoDayPackage member function definition
#include "TwoDayPackage.h"
#include <iostream>
#include <string>
#include <stdexcept>
using namespace std;

//constructor
TwoDayPackage::TwoDayPackage(const string &sender,const string &senderaddress,const string &sendercity,const string &senderstate,
                             const string &receiver,const string &addr,const string &cit,
                 const string &stat,const string &post,double weigh,double pricee,double twoDayfees)
                 :Package(sender,senderaddress,sendercity,senderstate,receiver,addr,cit,stat,post,weigh,pricee)
{
    if(twoDayfees>0)
        twoDayfee=twoDayfees;
    else
        throw invalid_argument("twoDay fee must be >0");
}//end constructor

//print object
void TwoDayPackage::print()const
{
    Package::print();// class passage print
    cout<<endl;
    cout<<"The fee has been changed."<<endl;
}
//set two day fee
void TwoDayPackage::setTwoDayFee( double twoDayfees )
{
    if(twoDayfees>0)
        twoDayfee = twoDayfees;
    else
        throw invalid_argument("The fees is not legal.");
}//end function set fee

//retrieve fee
double TwoDayPackage::getTwoDayFee()const
{
    return twoDayfee;
}//end function
//calculate cost
double TwoDayPackage::calculateCost()const
{
    return getWeight()*getPrice()+twoDayfee;
}//end calculates
