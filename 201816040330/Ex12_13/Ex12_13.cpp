#include <iostream>
#include <string>
#include <vector>
#include "OvernightPackage.h"//OvernightPackage class definition
#include "TwoDayPackage.h"//TwoDayPackage class definition
#include "Package.h"//Package class definition


int main()
{
    // create vector package
   vector <Package * >packages(4);

   //cout << fixed << setprecision( 2 );
   packages[ 0 ] = new OvernightPackage( "Tom","May","sss","bbb","i","p","0000",90.8 );
   packages[ 1 ] = new TwoDayPackage("Bob","Jone","ooo","yyy","y","k","8888",89.7 );
   packages[ 2 ] = new OvernightPackage("June","Lily","ggg","ppp","r","l","6666",67.8 );
   packages[ 3 ] = new TwoDayPackage("Puly","Yil","ttt","rrr","v","f","7777",56.0);


   // loop through vector, prompting user for get name
   double sum=0.0;
   for ( size_t i = 0; i < packages.size(); i++ )
   {
       double wi,fe,a;

      cout << "sendername address is " << packages[i]->getAddress1()<<endl;
      cout << "addresseename address is " << packages[i]->getAddress2()<<endl;
      cout <<"fee is"<<packages[i]->calculateCost(wi,fe)<<endl;
      a=packages[i]->calculateCost(wi,fe);
      sum+=a;
   }
   cout<<"sum is"<<sum<<endl;
   return 0;
}
