//Package.h
//Definition of Package class
#ifndef PACKAGE_H
#define PACKAGE_H
#include <string>
using namespace std;
class Package
{
public:
    Package (const string &,const string &,const string &,const string &,const string &,double ,double );//constructor
    virtual ~Package(){}//destructor
    void setUnivalence(double );//set the value of univalence
    double getUnivalence()const;//get the value of univalence
    void setParcelWeighs(double);//set the value of parcelWeighs
    double getParcelWeighs()const;//get the value of parcelWeighs
    string getSenderName()const;//return senderName
    string getReceiverName()const;//return receiveName
    string getSenderAddress()const;//return senderAddress
    string getReceiverAddress()const;//return receiverAddress
    virtual double calculateCost();//return the price of package
    virtual void print()const;//print information of package
private:
    string senderName;
    string receiverName;
    string senderAddress;
    string receiverAddress;
    string postalCode;
    double parcelWeighs;
    double univalence;
};
#endif
