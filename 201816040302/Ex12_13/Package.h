//Package.h
#ifndef PACKAGE_H
#define PACKAGE_H
#include<iostream>

using namespace std;

class Package
{
public:
    //base class constructor
    Package(string senderNam,string senderAddres,string senderCit,string senderStat,string senderPostCod,string addresseeNam,string addresseeAddres,string addresseeCit,string addresseeStat,string addresseePostCod,double weigh,double unitPric);
    virtual ~Package() { }
    virtual double calculateCost() = 0;   //base class calculate cost
    void setWeight(double weigh);
    void setUnitPrice(double unitPric);
    double getWeight() const;
    double getUnitPrice() const;
    string getSenderName() const;
    string getAddresseeName() const;
    string getSenderAddress() const;
    string getAddresseeAddress() const;
private:
    string senderName;
    string senderAddress;
    string senderCity;
    string senderState;
    string senderPostalCode;
    string recipientName;
    string recipientAddress;
    string recipientCity;
    string recipientState;
    string recipientPostalCode;
    double packageWeight;
    double costPerOunce;
};



