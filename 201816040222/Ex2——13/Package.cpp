#include <iostream>
#include <string>
#include "Package.h"
using namespace std;

 Package::Package(string sendname1,string recname1,string address1,string city1,string state1,string code1,double weight1,double price1)
{
    setSend(sendname1);
    setReciver(recname1);
    setAddress(address1);
    setState(state1);
    setCity(city1);
    setCode(code1);
    setWeight(weight1);
    setPrice(price1);
}

void Package::setSend(string sendname1)
{
    send=sendname1;
}
string Package::getSend()
{
    return send;
}
void Package::setReciver(string recname1)
{
    reciver=recname1;
}
string Package::getReciver()
{
    return reciver;
}
void Package::setAddress(string address1)
{
    address=address1;
}
string Package::getAddress()
{
    return address;
}
void Package::setCity(string city1)
{
    city=city1;
}
string Package::getCity()
{
    return city;
}
void Package::setState(string state1)
{
    state=state1;
}
string Package::getState()
{
    return state;
}
void Package::setCode(string code1)
{
    code=code1;
}
string Package::getCode()
{
    return code;
}
void Package::setWeight(double weight1)
{
    if(weight1>0)
        weight=weight1;
    else
        cout<<"weight must be positive " ;
}
double Package::getWeight()
{
    return weight;
}
void Package::setPrice(double price1)
{
    if(price1>0)
        price=price1;
    else
        cout<<"price must be positive" ;
}
double Package::getPrice()
{
    return price;
}
double Package::calculateCost()
{
    return weight*price;
}
void Package::print()
{
    cout << "sender name is : " << getSend() << endl
      << "reciver name is : " << getReciver() << endl
      << "address is : " << getAddress() << endl
      << "city is : " << getCity() << endl
      << "state is : " << getState() << endl
      << "code is : " << getCode() << endl
      << "weight is : " << getWeight() << endl
      << "price is : " << getPrice() << endl << endl;
}
