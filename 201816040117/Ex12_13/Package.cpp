#include<stdexcept>
#include<iostream>
#include"Package.h"

using namespace std;

Package::Package(string a,string b,string c,string d,string e,string f,string g,string h,string i,string j,double ou,double cos)
:sender(a),senderaddress(b),sendercity(c),senderprovince(d),sendercode(e),
recipient(f),recipientaddress(g),recipientcity(h),recipientprovince(i),recipientcode(j)
{
    if(ou>0)
        ounce=ou;
    else
        throw invalid_argument("ounce must be greater than 0");
    if(cos>0)
        cost=cos;
    else
        throw invalid_argument("cost per ounce be must greater than 0");
}//constructor
double Package::calculateCost()
{
    return ounce*cost;
}//calculate cost per ounce
string Package::getSender()
{
    return sender;
}
string Package::getRecipient()
{
    return recipient;
}
string Package::getSenderAddress()
{
    return senderaddress;
}
string Package::getRecipientAddress()
{
    return recipient;
}

string Package::getSenderCity()
{
    return sendercity;
}
string Package::getRecipientCity()
{
    return recipientcity;
}
string Package::getSenderProvince()
{
    return senderprovince;
}
string Package::getRecipientProvince()
{
    return recipientprovince;
}
string Package::getSenderCode()
{
    return sendercode;
}
string Package::getRecipientCode()
{
    return recipientcode;
}
double Package::getOunce()
{
    return ounce;
}
double Package::getCost()
{
    return cost;
}

void Package::print()
{
    cout<<"sender name:"<<getSender()<<endl;
    cout<<"sender address:"<<getSenderAddress()<<endl;
    cout<<"sender city:"<<getSenderCity()<<endl;
    cout<<"sender province:"<<getSenderProvince()<<endl;
    cout<<"sender code:"<<getSenderCode()<<endl;
    cout<<"recipient name:"<<getRecipient()<<endl;
    cout<<"recipient address:"<<getRecipientAddress()<<endl;
    cout<<"recipient city:"<<getRecipientCity()<<endl;
    cout<<"recipient province:"<<getRecipientProvince()<<endl;
    cout<<"recipient code:"<<getRecipientCode()<<endl;
}





