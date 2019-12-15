#include <string>
#include <iostream>
using namespace std;
#include "Package.h"
Package::Package(const string &N1,const string &N2,const string &D,const string &C,const string &Z,const string &ID,
               double Weight,double Fee)
:sender(N1),
 Receiver(N2),Address(D),City(C),Continent(Z),Code(ID),
 weight(Weight),price(Fee)
 {

 }
 void Package::setSendName(const string &N1)
  {
      sender=N1;
  }
string Package::getSendName()
{
    return sender;
}


void Package::setName(const string &N2)
  {
     Receiver=N2;
  }
string Package::getName()
{
    return Receiver;
}

void Package::setAddress(const string &D)
  {
    Address=D;
  }
string Package::getAddress()
{
    return Address;
}

 void Package::setCity(const string &C)
 {
     City=C;
 }
 string Package::getCity()
 {
     return City;
 }

void Package::setState(const string &Z)
{
    Continent=Z;
}
string Package::getState()
{
    return Continent;
}
void Package::setZip(const string &ID)
{
    Code=ID;
}
string Package::getZip()
{
    return Code;
}
void Package::setWeight(const double &Weight)
{
    weight=Weight;
}
double Package::getWeight()
{
    return weight;
}

 void Package::setPrice(const double &Fee)
 {
     price=Fee;
 }
double Package::getPrice()
{
    return price;
}

double Package::caculateCost()
{
    return getWeight()*getPrice();
}

void Package::print()
{
     cout<<"Sender:"<<sender<<endl;
     cout<<"Receiver:"<<Receiver<<endl;
     cout<<"Address:"<<Address<<"  city:"<<City<<"  State:"<<Continent<<endl;
     cout<<"Code:"<<Code<<endl;
     cout<<"Fee:"<<endl;
}

