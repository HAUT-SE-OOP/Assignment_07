#include <iostream>
using namespace std;

#include "Package.h"

Package::Package(const string &Address1,const string &Address2,double Weight,double Oneshot)
          :address1(Address1),address2(Address2)
{
    setWeight(Weight);
    setOneshot(Oneshot);
}
void Package::setAddress1(const string &Address1)
{
   address1=Address1;
}

string Package::getAddress1()const
{
    return address1;
}

void Package::setAddress2(const string &Address2)
{
   address2=Address2;
}

string Package::getAddress2()const
{
    return address2;
}
void Package::setWeight(double Weight)
{
    if(Weight>0)
        weight=Weight;
}
double Package::getWeight()const
{
    return weight;
}
void Package::setOneshot(double Oneshot)
{
    if(Oneshot>0)
        oneshot=Oneshot;
}
double Package::getOneshot()const
{
    return oneshot;
}
double Package::calculateCost()
{
    return getOneshot()*getWeight();
}
void Package::print()
{
    cout<<"\nMailing address: "<<getAddress1()<<"\nConsignee address: "<<getAddress2()<<endl;
}
