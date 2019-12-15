#ifndef PACKAGE_H
#define PACKAGE_H
#include<bits/stdc++.h>
using namespace std;
class package
{
private:
    string sender,Recipient,senderAddress,RecipientAddress,City,Postcode,;
    double Weight ,charge;
public:
    package(string ,string,string,string,string,string,double,double);
  virtual  double calculateCost();
    void addcharge(double );
   virtual string getmessage();


};
#endif // PACKAGE_H
