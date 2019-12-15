#include<string>

#include"Package.h"
#include"OvernightPackage.h"
using namespace std;

OvernightPackage::OvernightPackage(string add,double weigh, double pric, double pj)
	:Package(add, weigh, pric)
{
	perfee = pj;
}
double OvernightPackage::calculateCost()
{
	return getWeight() * (getPrice() + perfee);
}
