#include <iostream>
using namespace std;

#include "TwoDayPackage.h"


TwoDayPackage::TwoDayPackage( string Sender, string Receiver, string SenderPlace, string SenderCity,string SenderState,string SenderBianma,
        string ReceiverPlace,string ReceiverCity,string ReceiverState,string ReceiverBianma,double Weight,double Fee,double Average)
       : Package(Sender,Receiver,SenderPlace,SenderCity,SenderState,SenderBianma,ReceiverPlace,ReceiverCity,ReceiverState,ReceiverBianma,Weight,
                 Fee)
{
    setaverage( Average);
}

void TwoDayPackage::setaverage(double Average)
{
    if(Average>0)
    {
        average=Average;
    }
    else
    {
        throw invalid_argument( "average must be greater than zero! ");
    }
}
double TwoDayPackage::getaverage()
{
    return average;
}

double calculateCost(  )
{
    return getaverage() + Package::calculateCost();
}

void print()
{
    Package::print();
    cout<<"average: "<<getaverage()<<endl;
}
