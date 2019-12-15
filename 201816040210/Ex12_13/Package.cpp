#include <bits/stdc++.h>
#include "Package.h"
using namespace std;
//constructor function
Package::Package( string s,string r,string a,string c,string p,string pc,string ra,string rc,string rp,double w,double co )
    :sendName(s),
    receiveName(r),
    sAddress(a),
    sCity(c),
    sProvince(p),
    rAddress(ra),
    rCity(rc),
    rProvince(rp),
    postalCode(pc)
{
    if(w>0&&co>0)//weight and cost must be >0
    {
        weight = w;
        cost = co;
    }
    else
        invalid_argument("the weight and cost must be >0");
}//end function

//function to calculate total cost
double Package::calculateCost()
{
    return weight*cost;
}//end function

//function to get weight
double Package::getWeight()
{
    return weight;
}//end function

//function to get cost
double Package::getCost()
{
    return cost;
}//end function

//function to print several data members
void Package::print()
{
    cout<<"sendName:"<<sendName<<"   Address:"<<sAddress<<"   City:"<<sCity<<"   Province:"<<sProvince
        <<"\nreceiveName:"<<receiveName<<"   Address:"<<rAddress<<"   City:"<<rCity<<"   Province:"<<rProvince
        <<"\npostalCode:"<<postalCode<<endl;
}//end function

//function to get send address and receive address
void Package::getPackage()
{
    cout<<"sendAddress: "<<sAddress<<"     receiveAddress:"<<rAddress<<endl;
}//end function
