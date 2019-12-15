#include <iostream>
using namespace std;
#include <string>
#include "Package.h" // include definition of class Package


Package::Package( string first,string second,string dizhi,string chengshi,string zhou,string address,int you,double zhong,double ang)

{
 send=first;
 receive=second;
 //di=dizhi;
 cheng=chengshi;
 zhouu=zhou;
 a=you;
 //addresss=address;
setaddress(address);
setdizhi(dizhi);
 if(zhong>=0)
      setWei(zhong);
 else
    cout<<"wight out of range";

 if(ang>=0)
     setAng(ang);
else
    cout<<"out of range";
}

void Package::setWei(double zhong)
{
    b=zhong;
}

double Package::getWei()
{
    return b;
}

void Package::setAng(double ang)
{
    c=ang;
}

double Package::getAng()
{
    return c;
}
void Package::setdizhi(string dizhi)
{
    Dizhi=dizhi;
    //cout<<Dizhi;
}

string Package::getdizhi()
{
    return Dizhi;
}
void Package::setaddress(string address)
{
    addresss=address;
}

string Package::getaddress()
{
    return addresss;
}

double Package::calculatecost()
{
    return b*c;
}

void Package::print()
{
    cout<<"寄件人:"<<send<<"     "<<"寄件人地址:"<<zhouu<<"-"<<cheng<<"-"<<di<<endl;
    cout<<"货物重量："<<b<<"   "<<"盎司"<<c<<"    "<<"邮政编码"<<a<<endl;
    cout<<"收件人:"<<receive<<"     "<<"收件人地址:"<<addresss<<endl;

}






