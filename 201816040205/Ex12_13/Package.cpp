#include <iostream>
#include <string>
#include "Package.h"

using namespace std;

Package::Package(string s,string r,string sa,string ra,string  c,string st,string co,double w, double f)
{
 sName=s;
 rName=r;
 sAddress=sa;
 rAddress=ra;
 city=c;
 state=st;
 code=co;
 setOunce(w);
 setFpo(f);
}

void Package::setOunce(double w)
{
    if(w>0)
    ounce=w;
    else
    cout<<"Weight is Wrong!"<<endl;
}

void Package::setFpo(double f)
{
    if(f>0)
    fpo=f;
    else
    cout<<"Fee per ounce is Wrong!"<<endl;
}

double Package::getFpo()
{
    return fpo;
}

double Package::getOunce()
{
    return ounce;
}

double Package::calculateCost()
{
    return ounce*fpo;
}

string Package::getSa()
{
    return sAddress;
}

string Package::getRa()
{
    return rAddress;
}
