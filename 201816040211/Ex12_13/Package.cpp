#include <iostream>
using namespace std;

#include "Package.h"

Package::Package( string Sender, string Receiver, string SenderPlace, string SenderCity,string SenderState,string SenderBianma,
                 string ReceiverPlace,string ReceiverCity,string ReceiverState,string ReceiverBianma,double Weight,double Fee)
       : sender(Sender),receiver(Receiver),senderplace(SenderPlace), sendercity(SenderCity), senderstate(SenderState), senderbianma(SenderBianma),
        receiverplace(ReceiverPlace),receivercity(ReceiverCity),receiverstate(ReceiverState),receiverbianma(ReceiverBianma),weight(Weight),fee(Fee)
{  
              
}

void Package::setsender(string SEnder )
{
    sender = SEnder;
}
string Package::getsender( )
{
    return sender;
}


void Package::setreceiver(string  REceiver)
{
    receiver=REceiver;
}
string Package::getreceiver( )
{
    return receiver;
}


void Package::setsenderplace(string senderPLace)
{
    senderplace= senderPLace;
}
string Package::getsenderplace( )
{
    return senderplace;
}
void Package::setreceiverplace(string receiverPLace)
{
    receiverplace= receiverPLace;
}
string Package::getreceiverplace( )
{
    return receiverplace;
}

void Package::setsendercity(string senderCIty)
{
    sendercity=senderCIty;
}
string Package::getsendercity( )
{
    return sendercity;
}
void Package::setreceivercity(string receiverCIty)
{
    receivercity=receiverCIty;
}
string Package::getreceivercity( )
{
    return receivercity;
}

void Package::setsenderstate(string senderSTate)
{
    senderstate=senderSTate;
}
string Package::getsenderstate( )
{
    return senderstate;
}
void Package::setreceiverstate(string receiverSTate)
{
    receiverstate=receiverSTate;
}
string Package::getreceiverstate( )
{
    return receiverstate;
}

void Package::setsenderbianma(string senderBIanma)
{
    senderbianma=senderBIanma;
}
string Package::getsenderbianma( )
{
    return senderbianma;
}
void Package::setreceiverbianma(string receiverBIanma)
{
    receiverbianma=receiverBIanma;
}
string Package::getreceiverbianma( )
{
    return receiverbianma;
}

void Package::setweight(double WEight)
{
    if(WEight>0)
    {
        weight=WEight;
    }
    else
    {
        throw invalid_argument( "weight must be greater than zero! ");
    }
}
double Package::getweight()
{
    return weight;
}

void Package::setfee(double FEe)
{
    if(FEe>0)
    {
        fee=FEe;
    }
    else
    {
        throw invalid_argument( "fee must be greater than zero! ");
    }
}
double Package::getfee()
{
    return fee;
}

double Package::calculateCost( double weight, double fee)
{
    return weight*fee;
}

void Package::print()
{
    cout<<"sender: "<<sender<<endl;
    cout<<"receiver: "<<receiver<<endl;
    cout<<"senderplace: "<<senderplace<<endl;
    cout<<"sendercity: "<<sendercity<<endl;
    cout<<"senderstate: "<<senderstate<<endl;
    cout<<"senderbianma: "<<senderbianma<<endl;
    cout<<"receiverplace: "<<receiverplace<<endl;
    cout<<"receivercity: "<<receivercity<<endl;
    cout<<"receiverstate: "<<receiverstate<<endl;
    cout<<"receiverbianma: "<<receiverbianma<<endl;
}
