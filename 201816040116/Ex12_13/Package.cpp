#include <iostream>
using namespace std;
#include "Package.h"
#include<string>
#include<stdexcept>
Package::Package(string Sender,string Sendaddress,string Recipient,string Address,string City,string State,string Zipcode,
                 double Weight,double Cost) //构造函数
{
    sender=Sender;
    sendaddress=Sendaddress;
    recipient=Recipient;
    address=Address;
    city=City;
    state=State;
    zipcode=Zipcode;
    setcost(Weight,Cost);
}
void Package::setcost(double w,double c)    //判断是否合理并重载重量和每盎司费用
{
    if(w<0)
        throw invalid_argument("重量错误\n");
    else
        weight=w;
    if(c<0)
        throw invalid_argument("每盎司费用错误\n");
    else
        cost=c;
}
double Package::calculateCost()    //计算邮寄费用
{
    return weight*cost;
}
void Package::display() //显示有关邮寄信息
{
    cout<<"寄件人： "<<sender<<"\n收件人："<<recipient<<"\n寄件地址"<<sendaddress<<"\n收件地址："
        <<address<<"\n收件城市："<<city<<"\n收件州："
        <<state<<"\n邮政编码："<<zipcode<<"\n总邮费："<<calculateCost()<<"\n\n";
}
string Package::getsender()
{
    return sender;
}
string Package::getsendaddress()
{
    return sendaddress;
}
string Package::getrecipient()
{
    return recipient;
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
string Package::getzipcode()
{
    return zipcode;
}
double Package::getweight()
{
    return weight;
}
double Package::getcost()
{
    return cost;
}
