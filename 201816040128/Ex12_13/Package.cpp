#include<string>
using namespace std;
#include<iostream>
#include"Package.h"
Package::Package(string add, double weigh, double pric)
{
	address = add;
	weight = weigh;
	price = pric;
}
double Package::calculateCost()
{
	return weight * price;
}
double Package::getWeight()
{
	return weight;
}
double Package::getPrice()
{
	return price;
}

string  Package::getaddress()
{
	
	return address;
	
}