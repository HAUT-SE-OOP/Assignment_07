#ifndef PACKAGE_H_INCLUDED
#define PACKAGE_H_INCLUDED

using namespace std;

class Package
{
public:
    Package(string,string,string,string,int,double,double,string,string,int);
    double getWeight();
    double getCost();
    virtual double calculateCost();
    void point();
    void pointLocal();
private:
    string sender;
    string recipient;
    string state;
    string city;
    int postal;
    string sState;
    string sCity;
    int sPostal;
    double weight;
    double cost;
} ;


#endif // PACKAGE_H_INCLUDED
