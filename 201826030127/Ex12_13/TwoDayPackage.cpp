#include"TwoDayPackage.h"
#include"iostream"
using namespace std;
TwoDayPackage::TwoDayPackage(string adressname,string adress,string city,string state,string code,string senderneme, string senderadress,string sendercity,  string senderstate,string  sendercode,double weight,double fee,double twodayfee)
:       Package(adressname,adress,city,state,code,senderneme,senderadress,sendercity,senderstate,sendercode,weight,fee),TwoDayFee(twodayfee)
{

}//end class TwoDayPackage constructor function

double  TwoDayPackage::getTwoDayFee()  const
    {
        return TwoDayFee;
    }//end getTwoDayFee function


double TwoDayPackage::calculateCost()
{
    return Package::calculateCost()+TwoDayPackage::getTwoDayFee();
}
//display object message
void  TwoDayPackage::print()
    {
        cout<<"TwoDayPackage:"<<endl;
        cout<<"Adresser's  adress is"<<getAdress()<<endl<<"Adresser's city is "<<getCity()<<endl<<"Adresser's state is "<<getState()
        <<getState()<<endl;
        cout<<"Sender's  adress is"<<getSenderAdress()<<endl<<"Sender's city is "<<getSenderCity()<<endl<<"Sender's state is "<<getSenderState()
        <<getSenderState()<<endl;
        cout<<"Fee is"<<calculateCost()<<endl;
    }//end function print
