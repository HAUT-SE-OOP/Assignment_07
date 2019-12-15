#ifndef OVERNIGHTPACKAGE_H_INCLUDED
#define OVERNIGHTPACKAGE_H_INCLUDED
#include <bits/stdc++.h>
#include "Package.h"
using namespace std;
class OvernightPackage :public Package
{
public:
    OvernightPackage( string,string,string,string,string,string,string,string,string,double,double,double );//constructor function
    double calculateCost();//function to calculate total cost
    void setextralCost( double );//function to set extra cost
    double getextralCost();//function to get extra cost
    void print();//function to print
private:
    double extralCost;
};


#endif // OVERNIGHTPACKAGE_H_INCLUDED
