#ifndef PACKAGE_H
#define PACKAGE_H

#include <string>
#include<iostream>
using namespace std;
class Package
{

protected:
	string sender;
	string reciver;
	string address;
	string city;
	string state;
	string zipCode;
	double weight;
	double cost; // standard cost

public:
	Package(string = "", string = "", string = "", string = "", string = "", string = "", double = 1, double = 1);
	virtual void print();
	// protype of calculate function
	virtual double calculateCost();

	// protype of get and set function
	string getSender();
	void setSender(string sender);
	string getReciver();
	void setReciver(string reciver);
	string getAddress();
	void setAddress(string address);
	string getCity();
	void setCity(string city);
	string getState();
	void setState(string state);
	string getZipCode();
	void setZipCode(string zipCode);
	double getWeight();
	void setWeight(double weight);
	double getCost();
	void setCost(double cost);
};
#endif
