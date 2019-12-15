#include "TwoDayPackage.h"
/*initializing the two-day package by using "Package()" and setextra*/
TwoDayPackage::TwoDayPackage( const string &jn, const string &sn, const string &jp, const string &sp, const string &jc, const string &sc,
                              const string &js, const string &ss, const string &jpc, const string &spc, double wei, double pri, double extra )
    :Package( jn, sn, jp, sp, jc, sc, js, ss, jpc, spc, wei, pri)
{
    setextraprice(extra);
}
/*set the extra price for the two-day package*/
void TwoDayPackage::setextraprice(double extra)
{
    extraprice=extra;
}
/*get the extra price for the two-day package*/
double TwoDayPackage::getextraprice() const
{
    return extraprice;
}
/*return the gross freight for the two-day package*/
double TwoDayPackage::calculateCost()
{
    return Package::calculateCost()+getextraprice();
}
void TwoDayPackage::print()
{
    cout << "The sender is: " << getjname()
        << "\nThe sender come from: " << getjstate() << " " << getjcity() << " " << getjplace()
        << "\nThe zip code is: " << getjpostalcode() << endl;

    cout << "\nThe recipient is: " << getsname()
        << "\nThe recipient come from: " << getsstate() << " " << getscity() << " " << getsplace()
        << "\nThe zip code is: " << getspostalcode() << endl;

    cout << "\nThe package's weight is: " << getweight()
        << "\nThe price rate per ounce for the package is: " << getprice()
        << "\nThe extra price for Two-day package is: " << getextraprice() << endl;

    cout << "\nThe calculate Cost is: "<< calculateCost() << endl;
}
