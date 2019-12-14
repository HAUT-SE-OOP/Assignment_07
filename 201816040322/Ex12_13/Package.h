//Assignment_07: Package.h
//class definition
#ifndef PACKAGE_H
#define PACKAGE_H

using namespace std;

class Package
{
public:
    explicit Package( string, string, string, string,
                      string, string, double = 0, double = 0 );// constructor

    virtual ~Package(){} //destructor

    // set and get function
    void setWeight( double );
    double getWeight() const;

    void setPrice( double );
    double getPrice() const;

    string getSenderAddress() const;

    string getReceiveAddress() const;

    // cost
    virtual double calculateCost() const;

    virtual void print() const;// show
private:
    // data member
    string senderName;
    string recipientName;
    string address;
    string localCity;
    string localState;
    string postalCode;
    double weight;
    double price;
};


#endif // PACKAGE_H
