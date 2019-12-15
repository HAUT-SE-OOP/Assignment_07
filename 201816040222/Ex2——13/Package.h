#ifndef PACKAGE_H_INCLUDED
#define PACKAGE_H_INCLUDED
#include <iostream>
using namespace std;

 class Package
{
public:
    Package(string,string,string,string,string,string,double=0,double=0);
    virtual double calculateCost();
    void setWeight(double);
    double getWeight();
    void setPrice(double);
    double getPrice();
    void setSend(string);
    string getSend();
    void setReciver(string);
    string getReciver();
    void setAddress(string);
    string getAddress();
    void setCity(string);
    string getCity();
    void setState(string);
    string getState();
    void setCode(string);
    string getCode();
    virtual void print();
private:
    string send;
    string reciver;
    string address;
    string city;
    string state;
    string code;
    double weight;
    double price;
};


#endif // PACKAGE_H_INCLUDED
