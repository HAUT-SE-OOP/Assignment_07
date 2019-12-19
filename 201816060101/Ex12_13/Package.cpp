#include "Package.h"

Package::Package(string SenderName, string SenderAddress, string SenderCity, string SenderState, string SenderPostalCode, string ReceiverName, string ReceiverAddress, string ReceiverCity, string ReceiverState, string ReceiverPostalCode, double Weight, double CostPerOunce) :SenderName(SenderName), SenderAddress(SenderAddress), SenderCity(SenderCity), SenderState(SenderState), SenderPostalCode(SenderPostalCode), ReceiverName(ReceiverName), ReceiverAddress(ReceiverAddress), ReceiverCity(ReceiverCity), ReceiverState(ReceiverState), ReceiverPostalCode(ReceiverPostalCode) {
	this->Weight = 0;
	this->CostPerOunce = 0;
	if (Weight > 0) this->Weight = Weight;
	if (CostPerOunce > 0) this->CostPerOunce = CostPerOunce;
}

//Declare a virtual function to calculate cost
double Package::caculateCost() {
	return Weight * CostPerOunce;
}

double Package::getCostPerOunce() { return CostPerOunce; }

double Package::getWeight() { return Weight; }

//Declare a virtual function to get the sender's address
string Package::getSenderAddress() const {
	return SenderAddress;
}

//Declare a virtual function to get the receiver's address
string Package::getReceiverAddress() const {
	return ReceiverAddress;
}
