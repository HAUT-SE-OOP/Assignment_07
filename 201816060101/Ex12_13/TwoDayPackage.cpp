#include "TwoDayPackage.h"

TwoDayPacage::TwoDayPacage(string SenderName, string SenderAddress, string SenderCity, string SenderState, string SenderPostalCode, string ReceiverName, string ReceiverAddress, string ReceiverCity, string ReceiverState, string ReceiverPostalCode, double Weight, double CostPerOunce, double FlatCharge) :Package(SenderName, SenderAddress, SenderCity, SenderState, SenderPostalCode, ReceiverName, ReceiverAddress, ReceiverCity, ReceiverState, ReceiverPostalCode, Weight, CostPerOunce), FlatCharge(FlatCharge) {}

//Declare a virtual function to calculate cost
double TwoDayPacage::caculateCost() {
	return Package::caculateCost() + FlatCharge;
}

//Declare a virtual function to get the sender's address
string TwoDayPacage::getSenderAddress() const {
	return Package::getSenderAddress();
}

//Declare a virtual function to get the receiver's address
string TwoDayPacage::getReceiverAddress() const {
	return Package::getReceiverAddress();
}
