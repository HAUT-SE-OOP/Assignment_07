#ifndef PACKAGE_H_INCLUDED
#define PACKAGE_H_INCLUDED
#include <string>
using namespace std;
class Package
{
public:
    Package(string,string,string,string,string,string, string, double,double);
    virtual double calculateCost();
    void setOunce(double);
    double getOunce();
    void setFpo(double);
    double getFpo();
    string getSa();
    string getRa();
private  :
    string sName;
    string rName;
    string sAddress;
    string rAddress;
    string city;
    string state;
    string code;
    double ounce=0;
    double fpo=0;
};


#endif // PACKAGE_H_INCLUDED
