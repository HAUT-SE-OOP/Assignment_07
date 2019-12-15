#include <iostream>
#include <stdexcept>
#include <string>
#include "Package.h"  // Package class definition


using namespace std;

Package::Package( string a, string b, string c, string d, string e,string f, double g, double h )
{
    sender=a;
    recipient=b;
    address=c;
    localCity=d;
    localState=e;
    postalCode=f;
    setWeight( g );
    setPrice( h );
}

Package::~Package()
{
    cout<<"destruction";
}

void Package::setWeight( double wei )
{
    if ( wei > 0 )
        weight = wei;

}

double Package::getWeight()
{
    return weight;
}

void Package::setPrice( double pri )
{
    if ( pri > 0 )
        price = pri;

}

double Package::getPrice()
{
    return price;
}


double Package::calculateCost()
{
    return getWeight() * getPrice();
}

string Package::getSenderAddress()
{
   return localState +  localCity;

}

string Package::getReceiveAddress()
{
    return address;
}

void Package::print()
{
    cout << "The sender name is " << sender;
    cout<< "\nThe recipient name is " << recipient;
    cout<< "\nThe receiving address is " << address;
    cout<< "\nThe local city is " << localCity;
    cout<< "\nThe local state is " << localState;
    cout<< "\nThe postal code is " << postalCode;
    cout<< "\nThe package weight is " << getWeight();
    cout<< "\nThe package's price per cup is " << getPrice();
}
