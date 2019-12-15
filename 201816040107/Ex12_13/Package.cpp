#include <iostream>

#include "Package.h"
Package::Package(string name1,string name2,string add1,string add2,string s,string c,string code,double w,double cost)

{
    setsendername(name1);
    setreceivername(name2);
    setsenderadd(add1);
    setreceiveradd(add2);
    setstate(s);
    setcity(c);
    setcode(code);
    setweight(w);
    setcost(cost);
}
void Package::setsenderadd(string add1)
{
    senderadd=add1;
}
string Package::getsenderadd()
{
    return senderadd;
}
void Package::setreceiveradd(string add2)
{
    receiveradd=add2;
}
string Package::getreceiveradd()
{
    return receiveradd;
}
void Package::setweight(double w)
{
    weight=w;
}
double Package::getweight()
{
    return weight;
}
void Package::setcost(double c)
{
    cost=c;
}
double Package::getcost()
{
    return cost;
}
void Package::setstate(string b)
{
    state=b;
}
string Package::getstate()
{
    return state;
}
void Package::setcode(string b)
{
    code=b;
}
string Package::getcode()
{
    return code;
}
void Package::setcity(string c)
{
    city=c;
}
string Package::getcity()
{
    return city;
}
void Package::setsendername(string name)
{
    sendername=name;
}
string Package::getsendername()
{
    return sendername;
}
void Package::setreceivername(string name)
{
    receivername=name;
}
string Package::getreceivername()
{
    return receivername;
}
double Package::calculateCost()
{
    return weight*cost;
}
