#include"OvernightPackage.h"
#include"Package.h"
#include"iostream"
using namespace std;
OvernightPackage::OvernightPackage(string adressname,string adress,string city,string state,string code,string senderneme, string senderadress,string sendercity,  string senderstate,string  sendercode,double weight,double fee,double overnightfee)
:       Package(adressname,adress,city,state,code,senderneme,senderadress,sendercity,senderstate,sendercode,weight,fee),OvernightFee(overnightfee)
{

}//end class OvernightPackage constructor function

 double OvernightPackage::calculateCost()
 {
     double b=OvernightPackage::getOvernightFee()+getFee();
     Package::setFee(b);
     Package::getFee();
     return Package::calculateCost();

 }//end calculateCost function

 double OvernightPackage::getOvernightFee()
 {
     return OvernightFee;
 }//end getOvernightFee function

 //display object message
    void  OvernightPackage::print()
    {
        cout<<"OvernightPackage:"<<endl;
        cout<<"Adresser's  adress is"<<getAdress()<<endl<<"Adresser's city is "<<getCity()<<endl<<"Adresser's state is "<<getState()
        <<getState()<<endl;
        cout<<"Sender's  adress is"<<getSenderAdress()<<endl<<"Sender's city is "<<getSenderCity()<<endl<<"Sender's state is "<<getSenderState()
        <<getSenderState()<<endl;
        cout<<"Fee is"<<calculateCost()<<endl;

    }//end function print
