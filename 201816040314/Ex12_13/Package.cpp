//Package.cpp
#include "Package.h"
Package::Package(std::string sender02,std::string address02,std::string city02,std::string state02,
                 std::string receiver02,std::string receiverAddress02,std::string receiverCity02,std::string receiverState02,std::string receiverCode02,
                 double weight,double ounceFee)
:sender(sender02),address(address02),city(city02),state(state02),receiver(receiver02),
receiverAddress(receiverAddress02),receiverCity(receiverCity02),receiverState(receiverState02),receiverCode(receiverCode02)//to initialize the data number
{
    setWeight(weight);
    setOunceFee(ounceFee);
}
Package::~Package()//destructor
{

}
double Package::calculateCost()const//to calculate the cost of the mail
{
    return getOunceFee()*getWeight();
}
void Package::setSender(std::string sender)//to set the data number sender
{
    this->sender=sender;
}
void Package::setAddress(std::string address)//to set the data number address
{
    this->address=address;
}
void Package::setCity(std::string city)//to set the data number city
{
    this->city=city;
}
void Package::setState(std::string state)//to set the data number state
{
    this->state=state;
}
void Package::setWeight(double weight)//to set data number weight
{
    if(weight>=0)
        this->weight=weight;
    else
        this->weight=0;
}
void Package::setOunceFee(double ounceFee)//to set data number ounceFee
{
    if(ounceFee>=0)
        this->ounceFee=ounceFee;
    else
        this->ounceFee=0;
}
std::string Package::getSender()const//to return data number sender
{
    return sender;
}
std::string Package::getAddress()const//to return data number address
{
    return address;
}
std::string Package::getCity()const//to return data number city
{
    return city;
}
std::string Package::getState()const//to return data number state
{
    return state;
}
double Package::getWeight()const//to return data number weight
{
    return weight;
}
double Package::getOunceFee()const//to return data number ounceFee
{
    return ounceFee;
}
void Package::print()const//to print the information of the object
{
    std::cout<<"Sender:"<<getSender()<<std::endl<<"address:"<<getAddress()<<std::endl<<"city:"<<getCity()<<std::endl<<"state:"<<getState()<<std::endl
         <<"receiver:"<<getReceiver()<<std::endl<<"receiverAddress:"<<getReceiverAddress()<<std::endl<<"receiverCity:"<<getReceiverCity()<<std::endl<<"receiverState:"<<getReceiverState()<<std::endl
        <<"receiverCode:"<<getReceiverCode()<<std::endl;
}
void Package::setReceiver(std::string receiver)//to set the receiver
{
    this->receiver=receiver;
}
std::string Package::getReceiver()const//to get the receiver
{
    return receiver;
}
void Package::setReceiverCity(std::string city)//to set the receiver city
{
    this->receiverCity=city;
}
void Package::setReceiverState(std::string state)//to set the receiver state
{
    this->receiverState=state;
}
void Package::setReceiverCode(std::string code)//to set the receiver code
{
    this->receiverCode=code;
}
void Package::setReceiverAddress(std::string address)//to set the receiver address
{
    this->receiverAddress=address;
}
std::string Package::getReceiverCity()const//to get the receiver city
{
    return receiverCity;
}
std::string Package::getReceiverState()const//to get the receiver state
{
    return receiverState;
}
std::string Package::getReceiverCode()const//to get the receiver code
{
    return receiverCode;
}
std::string Package::getReceiverAddress()const//to get the receiver address
{
    return receiverAddress;
}
