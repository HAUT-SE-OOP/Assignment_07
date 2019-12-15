#include <iostream>
#include <string>
#include <stdexcept>
#include "TwoDayPackage.h"
using namespace std;

TwoDayPackage::TwoDayPackage(const string &sN,const string &sA,const string &sC,const string &sS,
                 const string &sZC,const string &rN,const string &rA,const string &rC,
                 const string &rS,const string &rZC,double weight , double price , double Fee)
        :Package(sN,sA,sC,sS,sZC,rN,rA,rC,rS,rZC,weight,price)
        {
            setFee(Fee);
        }
void TwoDayPackage::setFee(double Fee)
{
    if(Fee>=0.0)
        fee = Fee;
    else
        throw invalid_argument("Fee must be >=0.0");
}
double TwoDayPackage::getFee()const
{
    return fee;
}
double TwoDayPackage::calculateCost()const
{
    return Package::getWeight() * Package::getPrice() + getFee();
}
void TwoDayPackage::print()const
{
    cout << " Two day package informational:";
    Package::print();
    cout<< "The fee is :"
    <<getFee();
}
