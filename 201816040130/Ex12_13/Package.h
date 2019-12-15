#ifndef PACKAGE_H
#define PACKAGE_H
#include <string>
using namespace std;

class Package  //definition of class Package
{
public:
    Package(const string &,const string &,const string &,const string &,const string &,const string &,double,double); //constructor of Package
    void setWeight(double);
    double getWeight();
    void setFee(double);
    double getFee();
   virtual string getAddress();
   virtual string getCity();
   virtual string getState();
   virtual double calculateCost(); //declare function to calculateCost
public:
    string senderName;
    string receiverName;
    string address;
    string city;
    string state;
    string postCode;
    double weight;
    double fee;

};
#endif // PACKAGE_H
