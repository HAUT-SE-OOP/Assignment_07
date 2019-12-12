#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

#include "Package.h"
#include "TwoDayPackage.h"
#include "OvernightPackage.h"

int main()
{//creat vector of two base-class pointers
    vector < Package * > package(2);

    package[ 0 ] = new TwoDayPackage("3 "," 1" ," 1" ," 1" ," 1" ," 1" ," 1"," 1"," 1"," 2",50,2.0,2.7 );
    package[ 1 ] = new OvernightPackage(" 4"," 1"," 1"," 1"," 1"," 1"," 1"," 1"," 1"," 3",23,2.0,2.0);
    double m=0;
    for ( size_t i = 0; i < package.size(); i++ )
    {
      string sssendername;
      cout << "SenderName :  " ;
      cin >> sssendername;
      package[i]->setSenderName(sssendername);

      string sssenderaddressees;
      cout << "SenderAddressees :  " ;
      cin >> sssenderaddressees;
      package[i]->setSenderAddressees(  sssenderaddressees );

      string sssendercity;
      cout << "SenderCity :  " ;
      cin >> sssendercity;
      package[i]->setSenderCity( sssendercity  );

      string sssenderstate;
      cout << "SenderState :  " ;
      cin >> sssenderstate;
      package[i]->setSenderState( sssenderstate );

      string sssenderpostalcode;
      cout << "SenderPostalcode :  " ;
      cin >>  sssenderpostalcode;
      package[i]->setSenderPostalcode( sssenderpostalcode );
      cout << endl;
      string recipientname;
      cout << "RecipientName :  " ;
      cin >> recipientname;
      package[i]->setRecipientName(recipientname);

      string rrrecipientaddressees;
      cout << "RecipientAddressees :  " ;
      cin >> rrrecipientaddressees;
      package[i]->setRecipientAddressees(  rrrecipientaddressees );

      string rrrecipientcity;
      cout << "RecipientCity :  " ;
      cin >> rrrecipientcity;
      package[i]->setRecipientCity( rrrecipientcity  );

      string rrrecipientstate;
      cout << "RecipientState :  " ;
      cin >> rrrecipientstate;
      package[i]->setRecipientState( rrrecipientstate );

      string rrrecipientpostalcode;
      cout << "RecipientPostalcode :  " ;
      cin >>  rrrecipientpostalcode;
      package[i]->setRecipientPostalcode( rrrecipientpostalcode );
      cout << endl;
      double wweight = 0.0;
      cout << "Weight :  " ;
      cin >> wweight;
      package[i]->setWeight( wweight );

      double ffee = 0.0;
      cout << "Fee :  ";
      cin >> ffee;
      package[i]->setFee( ffee);
       cout << endl;

      package[i]->print();
      m=m+package[i]->getFee()*package[i]->getWeight();
      cout << endl;
      cout << endl;

   }

   cout << endl << "WholeFee: " << m;

}

