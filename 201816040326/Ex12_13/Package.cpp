#include <iostream>
#include<string>
#include"Package.h"
using namespace std;

Package::Package(string sname,string rname,string add,string c,string s,string code,double weight,double cost)//初始化数据成员
{
    sender_name = sname;
    recipient_name = rname;
    address = add;
    city = c;
    state = s;
    postalcode = code;

    if(weight > 0)
    {
        parcel_weight = weight;
    }
    else
    {
        parcel_weight = 0;
    }

    if(cost > 0)
    {
        cost_per_ounce = cost;
    }
    else
    {
        cost_per_ounce = 0;
    }
}

double Package::calculate_Cost()//标准运费计算
{
    return parcel_weight*cost_per_ounce;
}


string Package::getsender_name()
{
    return sender_name;
}

string Package::getrecipient_name()
{
    return recipient_name;
}

string Package::getaddress()
{
    return address;
}

string Package::getcity()
{
    return city;
}

string Package::getstate()
{
    return state;
}
string Package::getpostalcode()
{
    return postalcode;
}

double Package::getweight()//获取快递重量
{
    return parcel_weight;
}

double Package::getcost()//获取每盎司所需快递费
{
    return cost_per_ounce;
}

void Package::print()
{
    cout<<"Sender name: "<<getsender_name()<<endl;
    cout<<"Recipient name: "<<getrecipient_name()<<endl;
    cout<<"Address: "<<getaddress()<<endl;
    cout<<"City: "<<getcity()<<endl;
    cout<<"State: "<<getstate()<<endl;
    cout<<"Postalcode: "<<getpostalcode()<<endl;
    cout<<"Weight: "<<getweight()<<endl;
    cout<<"Cost: "<<getcost()<<endl;
}
