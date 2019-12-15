#ifndef PACKAGE.H
#define PACKAGE.H
#include<iostream>
#include<string>
using namespace std;


class Package
{
public:
    Package(string ,string ,string ,int ,double,double);
    virtual void getname();
    void setname(string );
    virtual void getaddress();
    void setaddress(string );
    string getcity();
    void setcity(string );
    int getpostcode();
    void setpostcode(int );
    void setprice(double );
    double getprice();
    void setweight(double );
    virtual void  calculateCost();
    double calculate();

private:
    string name;
    string address;
    string city;
    int postcode;
    double price;
    double weight;
    double  cost;

};

















#endif // PACKAGE
