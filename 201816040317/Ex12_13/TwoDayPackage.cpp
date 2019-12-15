#include <iostream>
#include <stdexcept>
#include "TwoDayPackage.h"

using namespace std;

TwoPackage::TwoPackage( string a, string b, string c, string d, string e,string f, double g, double h, double i ):Package( a, b, c, d, e,f,g,h)
{
    setTip( i );
}

void TwoPackage::setTip( double temptip )
{
    if ( temptip > 0 )
        tip = temptip;

}

double TwoPackage::getTip()
{
    return tip;
}

double TwoPackage::calculateCost()
{
    double  a=getTip() + Package::calculateCost();
    return a;
}

void TwoPackage::print()
{
    Package::print();
    cout <<endl<< "The normal mailing charges is " << getTip();
}
