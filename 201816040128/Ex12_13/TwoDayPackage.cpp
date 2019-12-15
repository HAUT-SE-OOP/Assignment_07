#include<string>
using namespace std;
#include"Package.h"
#include"TwoDayPackage.h"
TwoDayPackage::TwoDayPackage(string add,double weigh, double pric, double pj)
	:Package(add,weigh, pric)
{
	pjfee = pj;
}
double TwoDayPackage::calculateCost()
{
	return getWeight() * getPrice() + pjfee;
}
