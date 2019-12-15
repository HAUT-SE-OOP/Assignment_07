#include "TwoDayPackage.h"
#include <iostream>
using namespace std;
tdpack::tdpack(string a,string b,string c,string d,string e,string f,double x,double y,double z):package(a,b,c,d,e,f,x,y)
{
    setexprice(z);
}
void tdpack::setexprice(double z)
{
    if(z<0)
        z=0;
    exprice=z;
}
double tdpack::getexprice()
{
    return exprice;
}
double tdpack::calcuateCost()
{

    return getvalue()*getweight()+exprice;
}
