//Ex11_09:Test.cpp
#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include "Package.h"
#include "TwoDayPackage.h"
#include "OvernightPackage.h"
using namespace std;

int main()
{
	//set floating-point output formatting
	cout << fixed << setprecision(2);
	//create vector of three base-class pointers
	vector <Package*>packages(2);
	packages[0] = new TwoDayPackage("Xu", "HAUT", "Zhengzhou", "Henan", "123456", "Huang, HNLG, Jiaozuo, Henan, 234567", 2, .05, 1);
	packages[1] = new OvernightPackage("Xu", "HAUT", "Zhengzhou", "Henan", "123456", "Zhou, SZXY, Suzhou, Anhui, 345678", 2, .05, .05);
	for (Package* packagePtr : packages)
	{
		cout << "Sender messages: " << packagePtr->getName() << " " << packagePtr->getAddress() << " " << packagePtr->getCity()
			<< " " << packagePtr->getState() << " " << packagePtr->getPostNumber() << " " << endl;
		cout << "Receiver messages: " << packagePtr->getReceiverAddress() << endl;
		cout << packagePtr->calculateCost() << endl;
	}
	
	return 0;
}
