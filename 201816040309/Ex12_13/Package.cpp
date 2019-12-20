#include<iostream>
#include"Package.h"
using namespace std;
Package::Package(string sendname,string receivename,string fromaddress,string sendaddress,string city,string county,string postalcode,double weight,double fee):SendName(sendname),
ReceiveName(receivename),SendAddress(sendaddress),City(city),County(county),PostalCode(postalcode),FromAddress(fromaddress)
{
    if(weight < 0)
    {
        cout<<"the weight is invalid<<"<<endl;
    }
    else
    {
        Weight = weight;
    }
    if(fee <0)
    {
        cout<<"the fee is invalid"<<endl;
    }
    else
    {
        Fee = fee;
    }
}
double Package::CalculateCost(double fee,double weight)
{
    return weight * fee;
}
string Package::GetFromAddress()
{
    return FromAddress;
}
string Package::GetSendAddress()
{
    return SendAddress;
}
