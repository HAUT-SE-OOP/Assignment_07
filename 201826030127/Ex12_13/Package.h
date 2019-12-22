#ifndef PACKAGE_H_INCLUDED
#define PACKAGE_H_INCLUDED
#include<stdio.h>
#include<string>
using namespace std;
class Package
{
public:
    Package(string,string,string,string,string,string,string,string,string,string,double,double);
    void setWeight(double);//set weight
    void setFee(double);//set and check fee
    string getAdressName()  const;//return addresser's name
    string getAdress()  const;//return address's adress
    string getCity()  const;//return address's city
    string getState()  const;//return adress's atate
    string getCode()  const;//return address's code
    string getSenderName()  const;//return sender name
    string getSenderAdress()  const;//return sender address
    string getSenderCity()  const;//return sender city
    string getSenderState()  const;//return sender state
    string getSenderCode()  const;//return sender code
    double getWeight()  const;//return object weight
    double getFee()  const;//return all fee
   virtual double calculateCost();//calculate fee
   virtual  void print();//print object message and fee
private:
    string AdressName;//address's name
    string Adress;//address's adress
    string City;//address's city
    string State;//address's state
    string Code;//address's code
    string SenderName;//sender name
    string SenderAdress;//sender address
    string SenderCity;//sender city
    string SenderState;//sender state
    string SenderCode;//sender code
    double Weight;//object's weight
    double Fee;// object's part fee

};


#endif // PACKAGE_H_INCLUDED
