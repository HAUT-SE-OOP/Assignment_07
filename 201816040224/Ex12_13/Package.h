#define DEFINITION_H_INCLUDED

#include <iostream>
#include <string>

using namespace std;

class Package
{
    public:
        Package::Package(const string &,const string &,const string &,const string &,const string &,const string &,double = 0.0,double = 0.0);
        void setMass(double mass);
        void setPrice(double price);
        double calculateCost();
        double getMass_r();
        double getPrice_r();
        void print();
    private:
        string Sender;
        string Receiver;
        string Address;
        string City;
        string Province;
        string PostCode;
        double Mass;
        double Price;
};
#endif
