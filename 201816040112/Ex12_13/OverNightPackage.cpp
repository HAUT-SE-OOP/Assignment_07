#include "OverNightPackage.h"
#include <iostream>
using namespace std;
onpack::onpack(string a,string b,string c,string d,string e,string f,double x,double y,double z):package(a,b,c,d,e,f,x,y)
{
    setexpvalue(z);
}
void onpack::setexpvalue( double z)
{
    if(z<0)
        z=0;
    expvalue=z;

}
double onpack::getexpvalue()
{
    return expvalue;
}
double onpack::calcuateCost()
{

    return (getvalue()+expvalue)*getweight();
}
