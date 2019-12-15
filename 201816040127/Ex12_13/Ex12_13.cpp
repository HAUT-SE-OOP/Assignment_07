#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

// TwoDayPackage class definition
#include "TwoDayPackage.h"
#include "OvernightPackage.h"
void virtualViaPointer(const Package *const);//prototype
void virtualViaReference(const Package &);//prototype
int main()
{
   // instantiate TwoDayPackage object
    TwoDayPackage twoDayPackage( "Bob", "Lewis", "HeNan University of Technology", "Guangzhou WUzhen", "HeNan", 45200 , 12.0 , 8.0 ,10.0);
    OvernightPackage overnightPackage("Bob", "Lewis", "HeNan University of Technology", "Zhejiang Hangzhou", "HeNan", 45200 , 12.0 , 8.0 ,2.0);

   // set floating-point output formatting
   cout << fixed << setprecision( 2 );

   // get commission package data
      cout << "\naddressName is "
      << twoDayPackage.getAddressName()
      << "\nSenderAddressName is " << twoDayPackage.getCityName();
      cout << "\nTwoDayPackage's cost: $" << twoDayPackage.calculateCost() << endl;


      cout<< "\naddressName is "
      << overnightPackage.getAddressName()
      << "\nSenderAddressName is " << overnightPackage.getCityName();
      cout << "\nOvernightPackage's cost: $" << overnightPackage.calculateCost() << endl;

      vector<Package *>packages(2);
      packages[0]= &twoDayPackage;
      packages[1]= &overnightPackage;

} // end main
//call Package virtual functions print and earnings off a
//base-class pointer using dynamic binding
