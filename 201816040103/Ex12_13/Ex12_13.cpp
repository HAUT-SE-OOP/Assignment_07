#include <iostream>
#include <iomanip>
#include <vector> 
#include "Package.h"
#include "OvernightPackage.h"
#include "TwoDayPackage.h"
#include <string>
using namespace std;
int main()
{
	OvernightPackage a("Tom","Alice","lianhuajie","zhengzhou","henan","1111",10,5,1);
	TwoDayPackage b("Bob","James","qunli","haerbin","heilongjiang","2222",20,3,2);
	vector<Package *>packages(2);
	packages[0] = &a;
	packages[1] = &b;
	for(Package *packagePtr : packages)
	{
		cout<<"The addree :"<<endl;
		packagePtr->print();
		cout<<"The calculateCost :";
		cout<<packagePtr->calculateCost();
		cout<<endl;
		
	}
}
