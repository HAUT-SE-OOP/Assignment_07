#ifndef PACKAGE_H_INCLUDED
#define PACKAGE_H_INCLUDED
// Definition of Package class.
#include<string>
using namespace std;

class Package
{
public:
    Package( const string &, const string &, const string &,
            const string &, const string &, const string &, double, double ); //constructor initializes package information
    virtual double calculateCost();//calculate the cost of package
    void setSender( const string & );
    string getSender() const;
    void setAddress( const string & );
    string getAddress() const;
    void setLivingcity( const string & );
    string getLivingcity() const;
    void setLivingstate( const string & );
    string getLivingstate() const;
    void setPostalcode( const string & );
    string getPostalcode() const;
    void setReceiverlivingcity( const string & );
    string getReceiverlivingcity() const;
    void setPackageounce( double );
    double getPackageounce() const;
    void setPerouncecost( double );
    double getPerouncecost() const;
    virtual void print();
private:
    string sender;//data member sender
    string address;//data member address
    string livingcity;//data member living city
    string livingstate;//data member living state
    string receiverlivingcity;//data member receiver's living city
    string postalcode;//data member postal code
    double packageounce;//data member package ounce
    double perouncecost;//data member per ounce cost
};// end class Package

#endif // PACKAGE_H_INCLUDED
