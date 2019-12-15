//Package.cpp
// Member-function definitions for class Package.
#include <iostream>
#include <stdexcept>
using namespace std;

#include "Package.h" // include definition of class Package

// Package constructor initializes data member
Package::Package( string sendername, string recipientname,string senderaddressees,
                 string rrecipientaddressees, string ssendercity, string rrecipientcity,
                 string ssenderstate, string rrecipientstate, string ssenderpostalcode,string rrecipientpostalcode, double wweight, double ffee)
{
    setSenderName( sendername );
    setRecipientName( recipientname );
    setSenderAddressees(senderaddressees);
    setRecipientAddressees(  rrecipientaddressees );
    setSenderCity( ssendercity  );
    setRecipientCity(rrecipientcity);
    setSenderState( ssenderstate );
    setRecipientState( rrecipientstate );
    setSenderPostalcode( ssenderpostalcode );
    setRecipientPostalcode( rrecipientpostalcode );
    setWeight( wweight );
    setFee( ffee);

} // end Package constructor

void Package::setSenderName( string sendername  )
{
    senderName=sendername;
} // end function
string Package::getSenderName() const
{
    return senderName;
}


void Package::setRecipientName( string recipientname  )
{
    recipientName=recipientname;
} // end function
string Package::getRecipientName() const
{
    return recipientName;
}


void Package::setSenderAddressees(  string ssenderaddressees )
{
    senderaddressees=ssenderaddressees;
} // end function

string Package::getSenderAddressees() const
{
    return senderaddressees;
}


void Package::setRecipientAddressees(  string rrecipientaddressees )
{
    recipientaddressees=rrecipientaddressees;
} // end function

string Package::getRecipientAddressees() const
{
    return recipientaddressees;
}

void Package::setSenderCity( string ssendercity  )
{
    sendercity=ssendercity;
} // end function

string Package::getSenderCity() const
{
    return sendercity;
}

void Package::setRecipientCity( string rrecipientcity  )
{
    recipientcity=rrecipientcity;
} // end function

string Package::getRecipientCity() const
{
    return recipientcity;
}


void Package::setSenderState( string ssenderstate  )
{
    senderstate=ssenderstate;
} // end function

string Package::getSenderState() const
{
    return senderstate;
}

void Package::setRecipientState( string rrecipientstate  )
{
    recipientstate=rrecipientstate;
} // end function

string Package::getRecipientState() const
{
    return recipientstate;
}


void Package::setSenderPostalcode( string ssenderpostalcode  )
{
    senderpostalcode=ssenderpostalcode;
} // end function

string Package::getSenderPostalcode() const
{
    return senderpostalcode;
}

void Package::setRecipientPostalcode( string rrecipientpostalcode  )
{
    recipientpostalcode=rrecipientpostalcode;
} // end function

string Package::getRecipientPostalcode() const
{
    return recipientpostalcode;
}





void Package::setWeight( double wweight)
{
    if(wweight>=0.0)
    {
        weight=wweight;
    }
    else
        throw invalid_argument(" weight must be >= 0.0 ");
}
double Package::getWeight() const
{
    return weight;
}


void Package::setFee( double ffee)
{
    if(ffee>=0.0)
    {
        fee=ffee;
    }
    else
        throw invalid_argument(" fee must be >= 0.0 ");

}
double Package::getFee() const
{
    return fee;
}

double Package::calculateCost()
{
   return  getFee() * getWeight();
}

void Package::print()
{
   cout << "Name: " << "    " << "City: " << "    " << "Addressees: " << " " << "State: " << " " << "Postalcode: " << endl;
     cout << getSenderName() << "       " << getSenderCity() << "        " << getSenderAddressees() << "           " <<
        getSenderState() << "       " << getSenderPostalcode()<< endl << getRecipientName() <<
         "       "<< getRecipientCity() <<"        "  << getRecipientAddressees() <<"           "  << getRecipientState()
        << "       " << getRecipientPostalcode() << endl;
        cout <<  " Weight: "<< getWeight() << "       " <<"Fee: " <<  getFee() << "      " << "CalculateCost: "
        << calculateCost() << endl;
}



