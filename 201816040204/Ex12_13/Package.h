#ifndef PACKAGE_H_INCLUDED
#define PACKAGE_H_INCLUDED
#include <string>
using namespace std;

class Package
{
public:
    Package(const string &, const string &,const string &, const string &,
           const string &, const string &,double, double);
    void setSendName(const string &);
    string getSendName();
    void setName(const string &);
    string getName();

    void setAddress(const string &);
    string getAddress();

    void setCity(const string &);
    string getCity();

    void setState(const string &);
    string getState();

    void setZip(const string &);
    string getZip();
    void setWeight(const double &);
    double getWeight();
    void setPrice(const double &);
    double getPrice();
    virtual double caculateCost();
    virtual void print();
private:
    string sender;
    string Receiver,Address,City,Continent,Code;
    double weight,price;

};
#endif
