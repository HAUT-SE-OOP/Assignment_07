#include<bits/stdc++.h>
#include"OvernightPackage.h"
using namespace std;
Overnightpackage::Overnightpackage(string one,string two,string three,string four,string five,string six,double f,double s,double mcost)
:package(one,two,three,four,five,six,f,s),overnightcost(mcost){}
double Overnightpackage::calculateCost()
{
    addcharge(overnightcost);
    return package::calculateCost();

}
string Overnightpackage::getmessage()
{
    return package::getmessage();
}
