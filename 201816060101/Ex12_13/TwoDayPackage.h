#include "Package.h"
using namespace std;

class TwoDayPacage :public Package {
public:
	TwoDayPacage(string SenderName, string SenderAddress, string SenderCity, string SenderState, string SenderPostalCode, string ReceiverName, string ReceiverAddress, string ReceiverCity, string ReceiverState, string ReceiverPostalCode, double Weight, double CostPerOunce, double FlatCharge);
	virtual double caculateCost();	//Declare a virtual function to calculate cost
	virtual string getSenderAddress() const;	//Declare a virtual function to get the sender's address
	virtual string getReceiverAddress() const;	//Declare a virtual function to get the receiver's address
private:
	double FlatCharge;
};