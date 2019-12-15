#ifndef PACKAGE_H
#define PACKAGE_H
#include<string>
using namespace std;
class Package
{
public:
    Package(const string &,const string &,const string &,const string &,const string &,const string &,const string &,const string &,const string &,const string &,double,double);
    virtual double calculateCost()const;
    void setWeight(double);
    double getWeight()const;
    double getPrice()const;
    void printf()const;
    void setPrice(double);
private:
    string Sender;
    string Receiver;
    string Address;
    string City;
    string State;
    string Postcode;
    string Address0;
    string City0;
    string State0;
    string Postcode0;
    double Weight;
    double Price;
};
#endif
