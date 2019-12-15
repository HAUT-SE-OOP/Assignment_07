#ifndef PACKAGE_H_INCLUDED
#define PACKAGE_H_INCLUDED
#include<string>
using namespace std;
class Package
{
public:
    Package(string ,string ,string ,string ,string ,string ,string,string,string,string,double ,double );//constructor
    virtual double calculateCost();//return calculate cost
    string getSender();//return sender
    string getRecipient();//return recipient
    string getSenderAddress();//return address
    string getRecipientAddress();
    string getSenderCity();//return city
    string getRecipientCity();
    string getSenderProvince();//province
    string getRecipientProvince();
    string getSenderCode();//return code
    string getRecipientCode();
    double getOunce();//return ounce
    double getCost();//return cost per ounce
    void print();
private:
    string sender;
    string recipient;
    string senderaddress;
    string recipientaddress;
    string sendercity;
    string recipientcity;
    string senderprovince;
    string recipientprovince;
    string sendercode;
    string recipientcode;
    double ounce;
    double cost;
};


#endif // PACKAGE_H_INCLUDED
