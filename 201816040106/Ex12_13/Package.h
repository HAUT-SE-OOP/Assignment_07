#ifndef PACKAGE_H
#define PACKAGE_H
#include <string>
using namespace std;
class Package
{
public:
    Package(string,string,string,string,string,string,string,double,double);
    void setWeight(double);
    double getWeight();
    void setFee(double);
    double getFee();
    virtual double calculateCost();
    void setSenderAddress(string);
    string getSenderAddress();
    void setConsigneeAddress(string);
    string getConsigneeAddress();
private:
    string sender;
    string senderAddress;
    string consigneeName;
    string consigneeAddress;
    string consigneeCity;
    string consgineeCanton;
    string postalcode;
    double weight;
    double fee;
};
#endif
