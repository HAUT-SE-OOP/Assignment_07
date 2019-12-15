#include <iostream>
#include <stdexcept>
using namespace std;

#include "OvernightPackage.h"

OvernightPackage::OvernightPackage(const string &reN, const string &reA, const string &reC,
   const string &reS, const string &seN, const string &seA, const string &seC, const string &seS, const string &pc,
   double w, double p, double n  )
   :Package( reN, reA, reC, reS, seN, seA, seC, seS, pc, w, p)
   {
       setNightFee(n);
   }

void OvernightPackage::setNightFee(double n)
{
    if (n>=0.0)
        nightFee= n;
    else
        throw invalid_argument("nightFee must be >= 0.0");
}

double OvernightPackage::getNightFee()const
{
    return nightFee;
}

double OvernightPackage::calculateCost() const
{
   return getWeight() *(nightFee + getUnitPrice());
} // end function calculateCost;

double OvernightPackage::print() const
{
    Package::print();
    cout<< "\nNight fee : " << getNightFee()<<endl;
        cout<<"All Costs : "<< calculateCost()<< endl;
}
