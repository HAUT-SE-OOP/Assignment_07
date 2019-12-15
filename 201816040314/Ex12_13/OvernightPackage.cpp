//OvernightPackage.cpp
#include "OvernightPackage.h"
OvernightPackage::OvernightPackage(std::string sender,std::string address,std::string city,std::string state,std::string receiver,
                             std::string receiverAddress,std::string receiverCity,std::string receiverState,std::string receiverCode,
                             double weight,double ounceFee,double overnightFee)
:Package(sender, address, city, state, receiver,receiverAddress,receiverCity,receiverState,receiverCode, weight, ounceFee)//to initialize the data number
{
    setOvernightFee(overnightFee);
}
OvernightPackage::~OvernightPackage()
{

}
void OvernightPackage::setOvernightFee(double overnightFee)//to initialize the overnightFee
{
    this->overnightFee=overnightFee;
}
double OvernightPackage::getOvernightFee()const//to return the data number overnightFee
{
    return this->overnightFee;
}
double OvernightPackage::calculateCost()const//to calculate the cost of mail
{
    return Package::getWeight()*(getOvernightFee()+Package::getOunceFee());
}

