#include"Package.h"
#include"iostream"
using namespace std;
Package::Package(string adressname,string adress,string city,string state,string code,string sendername,string senderadress,string sendercity,string senderstate,string sendercode,double weight,double fee)
:      AdressName(adressname),Adress(adress),City(city),State(state),Code(code),SenderName(sendername),SenderAdress(senderadress),SenderCity(sendercity),SenderState(senderstate),SenderCode(sendercode)

    {
        setWeight(weight);
        setFee(fee);
    }//end class Package constructor function
    void Package::setWeight(double w)
    {
        if(w>1e-10)
            Weight=w;
    }//end setWeight function


    void Package::setFee(double f)
    {
        if(f>1e-10)
            Fee=f;
    }//end setFee function



    string Package::getSenderName()   const
    {
        return SenderName;
    }//end getSenderName function


    string Package::getAdressName()   const
    {
        return AdressName;
    }//end getAdressName function



    string Package::getAdress()   const
    {
        return Adress;
    }//end getAdress function



    string Package::getCity()  const
    {
        return City;
    }//end getCity function



    string Package::getState()  const
    {
        return State;
    }//end getState function


    string Package::getCode()  const
    {
        return Code;
    }//end getCode function


    double Package::getWeight()  const
    {
        return Weight;
    }//end getWeight function

    double Package::getFee()  const
    {
        return Fee;
    }//end getFee function

    double Package::calculateCost()
    {
        return getFee()*getWeight();

    }//end calculateCost function

    string Package::getSenderAdress()  const
    {
        return SenderAdress;
    }
    //end getSenderAdress function
    string Package::getSenderCity()  const
    {
        return SenderCity;
    }//end getSenderCity function

    string Package::getSenderState()  const
    {
        return SenderState;
    }//end getSenderState function

    string Package::getSenderCode()  const
    {
        return SenderCode;
    }//end getSenderCode function

    //display object message
     void  Package::print()
    {
        cout<<"Package:"<<endl;
        cout<<"Adresser's name is "<<getAdressName()<<endl<<"Adresser's  adress is"<<getAdress()<<endl<<"Adresser's city is "<<getCity()<<endl<<"Adresser's state is "<<getState()
        <<getState()<<endl<<"Adresser's code is "<<getCode()<<endl;
        cout<<"Sender's name is "<<getSenderName()<<endl<<"Sender's  adress is"<<getSenderAdress()<<endl<<"Sender's city is "<<getSenderCity()<<endl<<"Sender's state is "<<getSenderState()
        <<getSenderState()<<endl<<"Sender's code is "<<getSenderCode()<<endl<<"The package's weight is "<<getWeight()<<endl;
        cout<<"Fee is"<<calculateCost()<<endl;
    }//end function print
