#include<iostream>
#include<stdexcept>
#include"Package.h"
using namespace std;
Package::Package(const string &sender,const string &receive,const string &address,const string &city,const string &state,const string& postcode,const string &address0,const string &city0,const string &state0,
                 const string& postcode0,double weight,double price)
{
    Sender=sender;
    Receiver=receive;
    Address=address;
    City=city;
    State=state;
    Postcode=postcode;
    Address0=address0;
    City0=city0;
    State0=state0;
    Postcode0=postcode0;
    setWeight(weight);
    setPrice(price);
}
double Package::calculateCost()const
{
    return Weight*Price;
}
void Package::setWeight(double weight)
{
    if(weight<=0)
    {
        Weight=0;
    }
    else
        Weight=weight;
}
void Package::setPrice(double price)
{
    if(price<=0)
    {
        Price=0;
    }
    else
        Price=price;
}
double Package::getWeight()const
{
    return Weight;
}
double Package::getPrice()const
{
    return Price;
}
void Package::printf()const
{
    cout<<"Sender: "<<Sender<<endl;
    cout<<"Address: "<<Address<<endl;
    cout<<"City: "<<City<<endl;
    cout<<"State: "<<State<<endl;
    cout<<"Postcode: "<<Postcode<<endl;
    cout<<"Receiver: "<<Receiver<<endl;
    cout<<"Address: "<<Address0<<endl;
    cout<<"City: "<<City0<<endl;
    cout<<"State: "<<State0<<endl;
    cout<<"Postcode: "<<Postcode0<<endl;
}
