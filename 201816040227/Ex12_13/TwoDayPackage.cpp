#include <iostream>
#include <stdexcept>
using namespace std;

#include "TwoDayPackage.h"

TwoDayPackage::TwoDayPackage(const string &reN, const string &reA, const string &reC,
   const string &reS, const string &seN, const string &seA, const string &seC, const string &seS, const string &pc,double w, double p, double f  )
   :Package( reN, reA, reC, reS, seN, seA, seC, seS, pc, w, p)
   {
       setFlatFee(f);
   }

void TwoDayPackage::setFlatFee(double f)
{
    if (f>=0.0)
        flatFee= f;
    else
        throw invalid_argument("FlatFee must be >= 0.0");
}

double TwoDayPackage::getFlatFee()const
{
    return flatFee;
}

double TwoDayPackage::calculateCost() const
{
   return flatFee+(getWeight() * getUnitPrice());
} // end function calculateCost;

double TwoDayPackage::print()const
{
    Package::print();
    cout<< "\nFlat fee : " << getFlatFee()<<endl;
        cout<<"All Costs : "<< calculateCost()<< endl;
}
