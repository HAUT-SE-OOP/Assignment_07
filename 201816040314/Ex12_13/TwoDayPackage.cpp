//TwoDayPackage.cpp
#include "TwoDayPackage.h"
TwoDayPackage::TwoDayPackage(std::string sender,std::string address,std::string city,std::string state,std::string receiver,
                             std::string receiverAddress,std::string receiverCity,std::string receiverState,std::string receiverCode,
                             double weight,double ounceFee,double twoDayAverageFee)
:Package(sender, address, city, state, receiver,receiverAddress,receiverCity,receiverState,receiverCode, weight, ounceFee),twoDayFee(twoDayAverageFee)//to initialize the data number
{

}
TwoDayPackage::~TwoDayPackage()//destructor
{

}
void TwoDayPackage::setTwoDayFee(double twoDayFee)//to initialize the data number twoDayFee
{
    this->twoDayFee=twoDayFee;
}
double TwoDayPackage::getTwoDayFee()const//to return the data number twoDay Fee
{
    return this->twoDayFee;
}
double TwoDayPackage::calculateCost()const//to calculate the cost of the cost
{
    return Package::calculateCost()+getTwoDayFee();
}
