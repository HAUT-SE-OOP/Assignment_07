#include <string>
using namespace std;

#ifndef PACKAGE_H
#define PACKAGE_H

class Package {
public:
	Package(string SenderName, string SenderAddress, string SenderCity, string SenderState, string SenderPostalCode, string ReceiverName, string ReceiverAddress, string ReceiverCity, string ReceiverState, string ReceiverPostalCode, double Weight, double CostPerOunce);
	virtual double caculateCost();	//Declare a virtual function to calculate cost
	double getCostPerOunce();
	double getWeight();
	virtual string getSenderAddress() const;	//Declare a virtual function to get the sender's address
	virtual string getReceiverAddress() const;	//Declare a virtual function to get the receiver's address
private:
	string SenderName, SenderAddress, SenderCity, SenderState, SenderPostalCode, ReceiverName, ReceiverAddress, ReceiverCity, ReceiverState, ReceiverPostalCode;
	double Weight, CostPerOunce;
};


#endif // !PACKAGE_H
