#include <iostream>
#include <stdexcept>
#include "OvernightPackage.h"


using namespace std;

OvernightPackage::OvernightPackage( string a, string b, string c, string d, string e,string f, double g, double h, double i ): Package( a, b, c,d, e, f, g, h)
{
    setEveryTip( i );
}

void OvernightPackage::setEveryTip( double a )
{
    if ( a > 0 )
        everyTip = a;
}

double OvernightPackage::getEveryTip()
{
    return everyTip;
}

double OvernightPackage::calculateCost()
{
    double temp;
    temp=getEveryTip() * getWeight() + Package::calculateCost();
    return temp;
}

void OvernightPackage::print()
{
    Package::print();
    cout <<endl<< "The additional charge per serving is " << getEveryTip();
}
