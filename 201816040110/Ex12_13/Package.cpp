#include <iostream>
#include <iomanip>
#include <stdexcept>
using namespace std;
#include "Package.h"
Package::Package(const string &se,const string &re,const string &radd,const string &sadd,const string &ci,const string &con,const string &post,double Weight,double Fee)
{
    sename=se;
    rename=re;
    raddress=radd;
    saddress=sadd;
    city=ci;
    continent=con;
    postalcode=post;
    setweight(Weight);
    setfee(Fee);
}
void Package::print()
{
    cout<<"send name is "<<Package::getsename()<<"\nrend name is "<<Package::getrename()<<"\nthe send address is "<<Package::getsaddress()<<"\nthe receive address is "<<Package::getraddress()<<"\nthe city is "<<Package::getcity()<<
    "\nthe continent is "<<Package::getcontinent()<<"\nthe postalcode is "<<Package::getpostalcode()<<endl<<"the wight is "<<Package::getweight()<<"the fee is "<<Package::getfee()<<endl;
}
void Package::setsename(const string &a)
{
    sename=a;
}

void Package::setrename(const string &a)
{
    rename=a;
}

/*void Package::setaddress(const string &a)
{
    address=a;
}
*/
void Package::setcity(const string &a)
{
    city=a;
}

void Package::setcontinent(const string &a)
{
    continent=a;
}

void Package::setpostalcode(const string &a)
{
    postalcode=a;
}

void Package::setweight(double a )
{
    if(a>=0.0)
    weight=a;
}

void Package::setfee(double a )
{
    if(a>=0.0)
    fee=a;
}

double Package::calculateCost()
{
    return weight*fee;
}

double Package::getfee()
{
    return fee;
}

double Package::getweight()
{
    return weight;
}


    string Package::getsename()
    {
        return sename;
    }
    string Package::getrename()
    {
        return rename;
    }
    string Package::getraddress()
    {
        return raddress;
    }
    string Package::getsaddress()
    {
        return saddress;
    }
    string Package::getcity()
    {
        return city;
    }
    string Package::getcontinent()
    {
        return continent;
    }
    string Package::getpostalcode()
    {
        return postalcode;
    }






