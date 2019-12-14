#ifndef PACKAGE_H_INCLUDED
#define PACKAGE_H_INCLUDED

#include<string>
using namespace std;
class Package
{
public:
    Package(const string &,const string &,const string &,const string &,double,double);// constructor initializes balance
    virtual double CalculateCost();//get the fee
    virtual string getjiaddress();
    virtual string getshouaddress();
private:
    string jiname;//sender
    string shouname;//addressee
    string jiaddress;//address
    string shouaddress;
    double weight;//the data of weight
    double fee;//the data of fee
};


#endif // PACKAGE_H_INCLUDED
