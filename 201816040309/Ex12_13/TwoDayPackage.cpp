#include<iostream>
#include"TwoDayPackage.h"
using namespace std;
TwoDayPackage::TwoDayPackage(string sendname,string receivename,string fromaddress,string sendaddress,string city,string county,string postalcode,double weight,double fee,double twodayfee)
:Package( sendname, receivename, fromaddress,sendaddress, city, county, postalcode, weight, fee)
{
    if(twodayfee > 0)
        TwoDayFee = twodayfee;
    else
        cout<<"the twodayfee is invalid"<<endl;
}
double TwoDayPackage::CalculateCost(double fee,double weight)
{
    return weight * fee+ TwoDayFee;
}
