#include<iostream>
#include <iomanip>
#include <vector>
#include"OvernightPackage.h"
#include"Package.h"
#include"TwoDayPackage.h"

using namespace std;

int main()
{
	vector<Package*>packages(2);
	packages[0] = new TwoDayPackage("11111",10,10,1.0);   
	packages[1] = new OvernightPackage("22222", 10,10,10);
	cout << "地址是：";
	cout<<packages[0]->getaddress();    //打印地址
	cout << "\n" << packages[0]->calculateCost()<<"\n\n";   //输出费用
	cout << "地址是：";
	cout<<packages[1]->getaddress();    //打印地址
	cout << "\n" << packages[1]->calculateCost();

}