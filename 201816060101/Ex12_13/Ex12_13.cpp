#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include "OvernightPackage.h"
#include "TwoDayPackage.h"
using namespace std;

int main() {
	cout << fixed << setprecision(2);

	//Instantiate three classes
	string SenderName("ZWT"), SenderAddress("ZZ"), SenderCity("ZZ"), SenderState("HN"), SenderPostalCode("460000"), ReceiverName("ZDW"), ReceiverAddress("SC"), ReceiverCity("SC"), ReceiverState("HN"), ReceiverPostalCode("463800");
	double Weight = 10, CostPerOunce = 0.5, ExtraCostPerOunce = 0.2, FlatCharge = 1;

	Package a(SenderName, SenderAddress, SenderCity, SenderState, SenderPostalCode, ReceiverName, ReceiverAddress, ReceiverCity, ReceiverState, ReceiverPostalCode, Weight, CostPerOunce);
	cout << "The cost of package is: " << a.caculateCost() << "\n";

	TwoDayPacage b(SenderName, SenderAddress, SenderCity, SenderState, SenderPostalCode, ReceiverName, ReceiverAddress, ReceiverCity, ReceiverState, ReceiverPostalCode, Weight, CostPerOunce, FlatCharge);
	cout << "The cost of two day package is: " << b.caculateCost() << "\n";

	OvernightPacage c(SenderName, SenderAddress, SenderCity, SenderState, SenderPostalCode, ReceiverName, ReceiverAddress, ReceiverCity, ReceiverState, ReceiverPostalCode, Weight, CostPerOunce, ExtraCostPerOunce);
	cout << "The cost of overnight package is: " << c.caculateCost() << "\n\n\n";


	//Declare three base class pointers to three different class objects
	vector< Package* > ve;
	ve.push_back(&a);
	ve.push_back(&b);
	ve.push_back(&c);
	for (Package* it : ve) {
		cout << "The sender's address is : " << it->getSenderAddress() << "\n";
		cout << "The receiver's address is : " << it->getReceiverAddress() << "\n";
		cout << "The cost is : " << it->caculateCost() << "\n\n";
	}
	return 0;
}
