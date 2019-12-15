#include<bits/stdc++.h>
#include"TwoDayPackage.h"
using namespace std;
Twodaypackage::Twodaypackage(string one,string two,string three,string four,string five,string six,double f,double s,double mcost)
:package(one,two,three,four,five,six,f,s),twodaycost(mcost){}
double Twodaypackage::calculateCost()
{
    return twodaycost+package::calculateCost();
}
string Twodaypackage::getmessage()
{
    return package::getmessage();
}


