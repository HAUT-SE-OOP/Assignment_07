#include <iostream>
               using namespace std;

#include "Package.h" // Package class definition

// constructor
Package::Package(const string &reN, const string &reA, const string &reC,
   const string &reS, const string &seN, const string &seA, const string &seC, const string &seS, const string &pc,
   double w, double p  )
{
   recipientName = reN; // should validate
   reAddress= reA;
   reCity= reC;
   reState= reS;
   senderName = seN;
   seAddress=seA;
   seCity=seC;
   seState= seS;
   postalCode=pc;
   unitPrice=p;
   weight=w;
} // end Package constructor

// set RecipientName
void Package::setRecipientName( const string &re )
{
   recipientName = re; // should validate
} // end function setRecipientName

// return RecipientName
string Package::getRecipientName() const
{
   return recipientName;
} // end function getRecipientName

void Package::setReAddress( const string &reA )
{
   reAddress = reA; // should validate
} // end function setReAddress

// return ReAddress
string Package::getReAddress() const
{
   return reAddress;
} // end function ReAddress

void Package::setReCity( const string &c )
{
   reCity = c; // should validate
} // end function setReCity

// return ReCity
string Package::getReCity() const
{
   return reCity;
} // end function getReCity

void Package::setReState( const string &s )
{
   reState = s; // should validate
} // end function setReState

// return ReState
string Package::getReState() const
{
   return reState;
} // end function getReState


// set SenderName
void Package::setSenderName( const string &se )
{
   senderName = se; // should validate
} // end function setSenderName

// return SenderName
string Package::getSenderName() const
{
   return senderName;
} // end function getSenderName

// set SeAddress
void Package::setSeAddress( const string &seA )
{
   seAddress = seA; // should validate
} // end function setSeAddress

// return SeAddress
string Package::getSeAddress() const
{
   return seAddress;
} // end function getSeAddress

void Package::setSeCity( const string &c )
{
   seCity = c; // should validate
} // end function setSeCity

// return SeCity
string Package::getSeCity() const
{
   return seCity;
} // end function getSeCity

void Package::setSeState( const string &s )
{
   seState = s; // should validate
} // end function setSeState

// return SeState
string Package::getSeState() const
{
   return seState;
} // end function getSeState

void Package::setPostalCode( const string &pc )
{
   postalCode = pc; // should validate
} // end function setPostalCode

// return PostalCode
string Package::getPostalCode() const
{
   return postalCode;
} // end function getPostalCode

// set Weight
void Package::setWeight( double w )
{
   weight = ( w < 0.0 ) ? 0.0 : w;
} // end function setWeight

// return Weight
double Package::getWeight() const
{
   return weight;
} // end function getWeight

// set UnitPrice
void Package::setUnitPrice( double p )
{
   unitPrice = ( p > 0.0 ) ? p : 0.0;
} // end function setUnitPrice

// return UnitPrice
double Package::getUnitPrice() const
{
   return unitPrice;
} // end function getUnitPrice

double Package::calculateCost() const
{
   return weight * unitPrice;
} // end function calculateCost;

double Package::print () const
{
    cout<< "\nRecipient name : " << getRecipientName()
      << "\nRecipient's address : " << getReAddress()
      << "\nRecipient's city : "<<getReCity()
      << "\nRecipient's state : "<<getReState()
      << "\nSender name : " << getSenderName()
      << "\nSender's address : " << getSeAddress()
      << "\nSender's city : "<<getSeCity()
      << "\nSender's state : "<<getSeState()
      << "\nPostal code : "<<getPostalCode()
      << "\nPackage's weight : " << getWeight()
      << "\nUnit price : " << getUnitPrice()<<endl;

}
