#include <iostream>
#include <string>
#include <stdexcept>
#include "Package.h"
using namespace std ;
Package::Package(const string &s, const string &r,const string &sa, const string &sc, const string &sst,const string &ra, const string &rc, const string &rst,const string &po,double w ,double rat)
{
     sender_name=s ;
     Recipient_name=r ;
     s_address=sa ;
     s_city=sc ;
     s_state=sst ;
     r_address=ra ;
     r_city=rc ;
     r_state=rst ;
     Postal_Code=po ;
     setWeight(w) ;
     setRate(rat)  ;
}//构造函数
void Package::setWeight(double w)
{
    if (w>0.0)
    {
        weight=w ;
    }
    else
    {
        throw invalid_argument("weight must be >0") ;
    }
}//set函数
double Package::getrate()
{
    return rate ;
}//每公斤重量
double Package::getweight()
{
    return weight ;
}
void Package::setRate(double s)
{
    if (s>0.0)
    {
        rate=s ;
    }
    else
    {
        throw invalid_argument("rate must be >0") ;
    }
}
 double Package::calculate_Cost()
{
    return weight*rate ;
}
string Package::getrname ()
{
    return Recipient_name  ;
}//发送者名字
string Package::getsname()
{
   return     sender_name ;
}
string Package::gets_address()
{
    return s_address ;
}
 string Package::gets_city()
{
    return s_city ;
}
 string Package::gets_state ()
{
    return  s_state ;
}
 string Package::getr_address()
{
    return r_address ;
}
 string Package::getr_city()
{
    return r_city ;
}
string Package::getr_state ()
{
    return  r_state ;
}
string Package::getpos ()
{
    return Postal_Code ;
}//邮政
