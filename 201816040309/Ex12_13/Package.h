#ifndef Package_H
#define Package_H
#include <iostream>
using namespace std;
class Package
{
private:
    string SendName;
    string ReceiveName;
    string SendAddress;
    string FromAddress;
    string City;
    string County;
    string PostalCode;
    double Weight;
    double Fee;
public:
    string GetSendAddress();
    string GetFromAddress();
    Package(string,string,string,string,string,string,string,double,double);
    virtual double CalculateCost(double,double);

};
#endif // Package_H
