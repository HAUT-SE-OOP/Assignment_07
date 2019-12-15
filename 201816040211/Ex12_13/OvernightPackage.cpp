#include <iostream>
using namespace std;

#include "OvernightPackage.h"

OvernightPackage::OvernightPackage( string Sender, string Receiver, string SenderPlace, string SenderCity,string SenderState,string SenderBianma,
                 string ReceiverPlace,string ReceiverCity,string ReceiverState,string ReceiverBianma,double Weight,double Fee,double Twofee)
       : Package(Sender,Receiver,SenderPlace,SenderCity,SenderState,SenderBianma,ReceiverPlace,ReceiverCity,ReceiverState,ReceiverBianma,Weight,
                 Fee)
{
    settwofee( Twofee);
}

void settwofee(double Twofee)
{
    if(Twofee>0)
    {
        twofee=Twofee;
    }
    else
    {
        throw invalid_argument( "twofee must be greater than zero! ");
    }
}
double getfee()
{
    return twofee;
}

double calculateCost(double fee, double twofee, double weight )
{
    return (fee+twofee)*weight;
}
void print()
{
    Package::print();
    cout<<"twofee: "<<gettwofee()<<endl;
}
