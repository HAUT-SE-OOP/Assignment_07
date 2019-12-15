//Package.h
//Definition of Package class
#ifndef PACKAGE_H
#define PACKAGE_H
#include<string>
using namespace std;

class Package
{
public:
    Package(const string &,const string &,const string &,const string &,const string &,const string &,
            const string &,const string &,const string &,double = 0.0,double = 0.0);
    virtual ~Package() {};

    void setSenderName(const string &);//set sender's name
    string getSenderName() const;//retrieve sender's name

    void setSenderAddress(const string &);//set sender address
    string getSenderAddress()const;//retrieve sender address

    void setSenderCity(const string &);//set sender city
    string getSenderCity()const;//retrieve sender city

    void setSenderState(const string &);//set sender city
    string getSenderState()const;//retrieve sender state

    void setAddressName(const string &);//set address's name
    string getAddressName()const;//retrieve address's name

    void setAddress(const string &);//set address
    string getAddress()const;//retrieve address

    void setCity(const string &);//set city
    string getCity()const;//retrieve city

    void setState(const string &);//set state
    string getState()const;//retrieve state

    void setPostalCode(const string &);//set postal code
    string getPostalCode()const;//retrieve postal code

    void setWeight(double);//set weight
    double getWeight()const;//retrieve weight

    void setPrice(double);
    double getPrice()const;//retrieve price
    virtual double calculateCost()const;//retrieve cost
    virtual void print()const;//print package information
private:
    string senderName;
    string senderAddress;
    string senderCity;
    string senderState;
    string addressName;
    string addressAddress;
    string addressCity;
    string addressState;
    string postalCode;
    double weight;
    double price;//data member for class Postage
};//end class Postage
#endif // PACKAGE_H
