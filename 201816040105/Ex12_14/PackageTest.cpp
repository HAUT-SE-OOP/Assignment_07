#include <iostream>
#include <vector>
#include "Package.cpp"
#include "TwoDayPackage.cpp"
#include "OvernightPackage.cpp"
using namespace std;

int main()
{
	vector <Package*>packages(3);
	packages[0]=new Package("Mike","Jane","Hollywood","L.A.","California","90001",1.0,1.0);
	packages[1]=new TwoDayPackage("Mike","Jane","Hollywood","L.A.","California","90001",1.0,1.0,2.0);
	packages[2]=new OvernightPackage("Mike","Jane","Hollywood","L.A.","California","90001",1.0,1.0,3.0);
	
	for(Package *packagePtr:packages)
	{
		packagePtr->calculateCost();
		packagePtr->print();
	}

}
