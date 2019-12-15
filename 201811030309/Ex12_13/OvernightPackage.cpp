#include "OvernightPackage.h"

/*initializing the overnight package by using "Package()" and setexprice*/
OvernightPackage::OvernightPackage( const string & jn, const string & sn, const string & jp, const string & sp, const string & jc, const string & sc,
                   const string & js, const string & ss, const string & jpc, const string & spc, double wei, double pri, double ex )
    :Package( jn, sn, jp, sp, jc, sc, js, ss, jpc, spc, wei, pri)
{
    setextraprice(ex);
}
/*set the exprice for the overnight package*/
void OvernightPackage::setextraprice( double ex)
{
    extraprice=ex;
}
/*get the extra price for the overnight package*/
double OvernightPackage::getextraprice() const
{
    return extraprice;
}
/*return the gross freight for the overnight package*/
double OvernightPackage::calculateCost()
{
    return (getprice()+getextraprice())*getweight();
}
void OvernightPackage::print()
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
