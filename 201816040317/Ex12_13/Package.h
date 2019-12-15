#ifndef PACKAGE_H
#define PACKAGE_H
#include <string>
using namespace std;

class Package
{
public:
    explicit Package( string, string, string, string,string, string, double = 0, double = 0 );

    virtual~Package();
    void setWeight( double );
    double getWeight() ;
 string getSenderAddress();
    void setPrice( double );
    double getPrice() ;
 string getReceiveAddress() ;
 double calculateCost();

 void print() ;
private:
    string sender;
    string recipient;
    string address;
    string localCity;
    string localState;
    string postalCode;
    double weight;
    double price;
};


#endif
