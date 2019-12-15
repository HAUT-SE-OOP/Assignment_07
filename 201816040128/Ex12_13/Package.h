#ifndef PACKAGE_H
#define  PACKAGE_H
#include<string>
using namespace std;

class Package {
public:
	Package(string, double, double);
	double calculateCost();
	double getWeight();
	double getPrice();
	string  getaddress();
private:
	string namesjr;
	string namejjr;
	string address;
	string city;
	string state;
	string encoding;
	double weight;
	double price;
};
#endif 
