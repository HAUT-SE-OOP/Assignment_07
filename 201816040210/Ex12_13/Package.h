#ifndef PACKAGE_H_INCLUDED
#define PACKAGE_H_INCLUDED
#include <string.h>
using namespace std;
class Package
{
public:
    Package( string,string,string,string,string,string,string,string,string,double,double );//constructor function
    virtual double calculateCost();//function to calculate total cost
    double getWeight();//function to get weight
    double getCost();//function to get cost
    virtual void print();//function to print several data members
    void getPackage();
private:
    string sendName;
    string receiveName;
    string sAddress;
    string sCity;
    string sProvince;
    string rAddress;
    string rCity;
    string rProvince;
    string postalCode;
    double weight;
    double cost;
};


#endif // PACKAGE_H_INCLUDED
